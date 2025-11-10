
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	nbr;
	int	i = 2;

	if (argc != 2)
		return (printf("\n"), 0);
	nbr = atoi(argv[1]);
	if (nbr == 1)
		printf("1");
	while (nbr > 1)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			nbr /= i;
			if (nbr > 1)
				printf("*");
			i--;
		}
		i++;
	}
	return (0);
}
