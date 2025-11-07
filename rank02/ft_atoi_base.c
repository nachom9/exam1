
int	ft_isspace(char c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

int	is_valid(char c, int str_base)
{
	char	hex[16] = "0123456789abcdef";
	char	hexup[16] = "0123456789ABCDEF";
	int	i = 0;

	while (i < str_base)
	{
		if (c == hex[i] || c == hexup[i])
			return (1);
		i++;
	}
	return (0);

}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && is_valid(str[i], str_base))
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
                        result += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
                        result += str[i] - 'A' + 10;
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	str[] = " 1bk";
	int	str_base = 15;
	int	nb;

	nb = ft_atoi_base(str, str_base);
	printf("%d", nb);
	return (0);
}*/
