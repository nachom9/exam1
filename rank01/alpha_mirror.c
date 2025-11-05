
#include <unistd.h>

int	main(int argv, char *argc[])
{
	int	i = 0;
	int	change = 0;

	if (argv != 2)
		return (write(1, "\n", 1), 0);
	while (argc[1][i])
	{
		if (argc[1][i] >= 'A' && argc[1][i] <= 'Z')
		{
			change = argc[1][i] - 'A';
			argc[1][i] = 'Z' - change;
		}
		else if (argc[1][i] >= 'a' && argc[1][i] <= 'z')
                {
                        change = argc[1][i] - 'a';
                        argc[1][i] = 'z' - change;
                }
		write (1, &argc[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
