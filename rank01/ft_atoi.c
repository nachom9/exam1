
int	ft_atoi(const char *str)
{
	int	result = 0;
	int	i = 0;
	int	sign = 1;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{	
	printf("%d", ft_atoi(" 	 	 0sdkls"));
	return (0);
}
*/
