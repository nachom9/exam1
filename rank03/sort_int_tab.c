
void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	count;
	int	tmp;
	
	count = 0;
	tmp = 0;
	while (count < size)
	{
		if (tab[count] > tab[count + 1])
		{
			tmp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = tmp;
			count = -1;
		}
		count++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	array[10] = {1000000, 2, 20549, -2545, 205, 96, 0, 4145, 3, -120593};
	int	i = 0;
	int	size = 10;

	while (i < size)
        {
                printf("%d ", array[i]);
                i++;
        }
	printf("\n");
	i = 0;
	sort_int_tab(array, size);
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}*/
