
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb = 0;
	int	i = 0;

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
	if (nb > 10)
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
	int	mult = 1;

	if (argc != 2)
		return (write(1, "\n", 1), 0);
	nb = ft_atoi(argv[1]);
	while (mult < 10)
	{
		ft_putnbr(mult);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(nb * mult);
		write(1, "\n", 1);
		mult++;
	}
	return (0);
}
