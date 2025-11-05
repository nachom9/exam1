
#include <unistd.h>

int	check(int c, char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i = 0;
	int	j;
	int	k = 0;
	char	str[256];

	if (argc != 3)
		return (write(1, "\n", 1));
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				if(check(argv[1][i], str) == 0)
				{
					str[k] = argv[1][i];
					write(1, &argv[1][i], 1);
					k++;
				}
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}
