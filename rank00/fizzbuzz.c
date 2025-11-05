
#include <unistd.h>

void	putnb(int c)
{
	if (c > 9)
	{
		putnb(c / 10);
		putnb(c % 10);
	}
	else
	{
		c += '0';
		write(1, &c, 1);
	}
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else
			putnb(n);
		write (1, "\n", 1);
		n++;
	}
	return (0);
}
