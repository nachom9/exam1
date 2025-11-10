
#include <stdlib.h>

int	count(int nbr)
{
	int	count = 0;
	
	if (nbr <= 0)
	{
		nbr = -nbr;
		count++;
	}
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	long int	long_nbr;
	char	*result;
	int	len;

	long_nbr = nbr;
	len = count(long_nbr);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (long_nbr == 0 && len == 1)
		result[0] = '0';
	if (long_nbr < 0)
	{
		result[0] = '-';
		long_nbr = -long_nbr;
	}
	while (long_nbr)
	{
		result[len - 1] = long_nbr % 10 + '0';
		long_nbr /= 10;
		len--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(2147483647));
	return (0);
}*/
