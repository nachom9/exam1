
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 0;
	int	j = 0;

	if (argc != 3)
		return (write(1, "\n", 1), 0);
	while (argv[2][i] && argv[1][j])
	{
		if (argv[2][i] == argv[1][j])
			j++;
		i++;
		if (!argv[1][j])
		{
			write(1, "1\n", 2);
			return (0);
		}
	}
	return (write(1, "0\n", 2), 0);
}
