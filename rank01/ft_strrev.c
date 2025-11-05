
char    *ft_strrev(char *str)
{
	int	i = 0;
	int	len = 0;
	char	temp;
	
	while(str[len])
		len++;

	while (i < (len)/2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "This is a test";
	printf("%s", (ft_strrev(str)));
	return (0);
}*/
