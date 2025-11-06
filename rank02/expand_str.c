
#include <unistd.h>

int	ft_isspace(char c)
{
	if (c && c <= 32)
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int	i = 0;
	int	space = 0;

	if (argc != 2)
		return (ft_putchar('\n'), 0);
	while (ft_isspace(argv[1][i]))
                {
                        i++;
                }
	if (!argv[1][i])
		return (ft_putchar('\n'), 0);
	while (argv[1][i])
	{
		if (ft_isspace(argv[1][i]))
		{
			space = 1;
			i++;
		}
		else
		{
			if (space == 1)
				write(1, "   ", 3);
			ft_putchar(argv[1][i]);
			space = 0;
			i++;
		}
	}
	return (ft_putchar('\n'), 0);
}

