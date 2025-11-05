
int	max(int* tab, unsigned int len)
{
	int	max = tab[0];
	unsigned int	i = 1;

	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
/*
#include <stdio.h>

int	main(void)
{
	int	array[] = {99999, 500, 1, 350, -23545, 250, 999999, 3, 0, 2423};

	printf("%d", max(array, 8));
	return (0);
}*/
