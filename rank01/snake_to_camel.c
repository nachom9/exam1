
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 0;

	if (argc != 2)
		return (write(1, "\n", 1), 0);
	while (argv[1][i])
	{
		if (argv[1][i] == '_')
			argv[1][i + 1] -= 32;
		else
			write (1, &argv[1][i], 1);
		i++;
	}
	return (write(1, "\n", 1), 0);
}
