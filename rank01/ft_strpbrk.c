#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j = 0;
	char	*copy = (char *)s1;

	while (copy[i])
	{
		j = 0;
		while (s2[j])
		{
			if (copy[i] == s2[j])
				return (&copy[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s", ft_strpbrk("Thiszs is a test", "zyxsk"));
	return (0);
}*/
