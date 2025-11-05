
#include <unistd.h>

int	main(int argv, char *argc[])
{
	int	j = 0;

	if (argv == 2 && argc[1])
	{
		while (argc[1][j])
		{
			if (argc[1][j] != ' ' && argc[1][j] != '	')
			{
				write (1, &argc[1][j], 1);
				if (argc[1][j + 1] == '\0' || argc[1][j + 1] == ' ' || argc[1][j + 1] == '	')
				{
					write (1, "\n", 1);
					return (0);
				}
			}
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
