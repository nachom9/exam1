
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len = 0;
	int	i = 0;

	if (argc != 2)
		return (write(1, "\n", 1), 0);
	while (argv[1][len + 1])
	{
		len++;
	}

	while (len > 0)
	{
		while (argv[1][len] == ' ')
			len--;
		while (argv[1][len - 1] && argv[1][len - 1] != ' ')
		{
			len--;
			i = len;
		}
		i = len;
		while (argv[1][len] && argv[1][len] != ' ')
		{
			write (1, &argv[1][len], 1);
			len++;
		}
		i--;
		len = i;
		if (len > 0)
			write(1, " ", 1);
	}
	write(1, "\n", 1);
	return (0);
}
