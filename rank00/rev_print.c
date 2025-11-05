
#include <unistd.h>

int	main(int argv, char *argc[])
{
	int	i = 0;

	if (argv == 2)
	{
		while (argc[1][i] && argc[1][i + 1])
		{
			i++;
		}
		while (argc[1][i])
		{
			write(1, &argc[1][i], 1);
			i--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
