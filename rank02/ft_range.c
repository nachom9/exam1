
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	i = 0;
	int	len;

	len = (end - start);
	if (len < 0)
		len *= -1;
	array = malloc(sizeof(int) * (len + 1));
	if (!array)
		return (0);
	while (i <= len)
	{
		if (start - i < end)
			array[i] = start + i;
		else
                        array[i] = start - i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	start = 0;
	int	end = -3;
	int     *array = ft_range(start, end);
	int	i = 0;
	
	while (i < 4)
	{
		printf("%d,", array[i]);
		i++;
	}
	return (0);
}*/
