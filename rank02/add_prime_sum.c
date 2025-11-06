
#include <unistd.h>
#include <stdio.h>

int	atoi(char *str)
{
	int	nb = 0;
	int	i = 0;

	if (str[i] == '-')
		return (-1);
	while (str[i])
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
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
	int	nb;
	int	i = 1;
	int	count = 0;
	int	res = 0;
	int	prime;

	if (argc != 2)
		return (write(1, "\n", 1), 0);
	nb = atoi(argv[1]);
	prime = nb;
	if (nb < 0)
		return (write(1, "\n", 1), 0);
	while (prime > 1)
	{
		count = 0;
		i = 1;
		while (i <= prime)
		{
			if (prime % i == 0)
				count++;
			i++;
		}
		if (count == 2)
			res += prime;
		prime--;
	}
	ft_putnbr(res);
	return (write(1, "\n", 1), 0);
}
