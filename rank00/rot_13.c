
#include <unistd.h>

int	main(int argv, char *argc[])
{
	char	c;
	int	i = 0;

	if (argv == 2)
	{
		while (argc[1][i])
		{
			if ((argc[1][i] >= 'a' && argc[1][i] <= 'm') || (argc[1][i] >= 'A' && argc[1][i] <= 'm'))
			{
				c = argc[1][i] + 13;
				write(1, &c , 1);
			}
			else if ((argc[1][i] > 'm' && argc[1][i] <= 'z') || (argc[1][i] > 'M' && argc[1][i] <= 'Z'))
			{
				c = argc[1][i] - 13;
                                write(1, &c , 1);
			}
			else
				write(1, &argc[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
