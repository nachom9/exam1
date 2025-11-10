
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	len;
	char	*word;
	int	check;

	check = 0;
	i = 0;
	len = 0;
	if (argc < 2)
		return (write(1, "\n", 1), 0);
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
	{
		i++;
	}
	while (argv[1][i + len] && (!(argv[1][i + len] == ' ' || argv[1][i + len] == '\t')))
	{
		len++;
	}
	word = malloc(len + 1);
	if (!word)
		return (0);
	len = 0;
	while (argv[1][i] && (!(argv[1][i] == ' ' || argv[1][i] == '\t')))
                {
                        word[len] = argv[1][i];
			i++;
			len++;
                }
	word[len] = '\0';
	while (argv[1][i])
	{
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		{
			i++;
			check = 1;
		}
		while (argv[1][i] && (!(argv[1][i] == ' ' || argv[1][i] == '\t')))
		{
			write (1, &argv[1][i], 1);
			check = 0;
			i++;
		}
		if (check == 0)
			write(1, " ", 1);
	}
	i = 0;
	while (word[i])
	{
		write(1, &word[i], 1);
		i++;
	}
	return (0);
}
