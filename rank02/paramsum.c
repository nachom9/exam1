
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int main(int argc, char *argv[])
{
	int	count = 0;

	if (argc > 0)
		while (argv[count])
			count++;
	count -= 1;
	ft_putnbr(count);
}
