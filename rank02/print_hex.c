
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

void	put_hex(int nb)
{
	char	*base = "0123456789abcdef";

	if (nb >= 16)
	{
		put_hex(nb / 16);
		put_hex(nb % 16);
	}
	else
		write(1, &base[nb], 1);
}

int main(int argc, char *argv[])
{
	int	nb;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		put_hex(nb);
	}
	write(1, "\n", 1);
	return (0);
}
