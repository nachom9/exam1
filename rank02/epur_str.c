
#include <unistd.h>

int	count_words(char *str)
{
	int	count = 0;
	int	i = 0;

	while ((str[i] <= 9 && str[i] >= 13) || str[i] == ' ')
		i++;
	if (str[i])
		count++;
	while (str[i])
	{
		if ((str[i] <= 9 && str[i] >= 13) || str[i] == ' ')
			count++;
		i++;
	}
	return (count);
}

int	main(int argc, char *argv[])
{
	int	words;
	int	i = 0;

	if (argc != 2)
		return (write(1, "\n", 1), 0);
	words = count_words(argv[1]);
	if (words < 1)
		return (write(1, "\n", 1), 0);
	while ((argv[1][i] <= 9 && argv[1][i] >= 13) || argv[1][i] == ' ')
                i++;
	while (argv[1][i])
	{
		while (!((argv[1][i] <= 9 && argv[1][i] >= 13) || argv[1][i] == ' '))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		while ((argv[1][i] <= 9 && argv[1][i] >= 13) || argv[1][i] == ' ')
		{
			i++;
			if (!argv[1][i])
				return (write(1, "\n", 1), 0);
		}
		write (1, " ", 1);
	}
	return (write(1, "\n", 1), 0);
}
