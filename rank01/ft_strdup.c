
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	i = 0;
	int	j = 0;
	char	*copy;

	while (src[j])
		j++;
	copy = malloc(j + 1);
	if (!src)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*a;
	a = "Hello World";
	printf("%s\n", ft_strdup(a));
	return (0);
}*/
