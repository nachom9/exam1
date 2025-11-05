
#include <unistd.h>

int	main(int argv, char *argc[])
{
	int	i = 0;
	int	j = 0;

	if (argv == 2)
	{
		while (argc[1][i])
		{
			if (argc[1][i] <= 'z' && argc[1][i] >= 'a')
			{
				while (j <= argc[1][i] - 97)
				{
					write (1, &argc[1][i], 1);
					j++;
				}
			}
			else if (argc[1][i] <= 'Z' && argc[1][i] >= 'A')
			{
				while (j <= argc[1][i] - 65)
                                {
                                        write (1, &argc[1][i], 1);
                                        j++;
                                }
			}
			else
				write (1, &argc[1][i], 1);
			j = 0;
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
