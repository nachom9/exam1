
#include <stdlib.h>

int	count_words(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
			count++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (count);
}

int	letter(char *str)
{
	int	i = 0;
	while (str[i] && str[i] != ' ')
		i++;
	return (i);
}

char    **ft_split(char *str)
{
	char	**result;
	int	words;
	int	i;
	int	j;
	int	k;
	int	len;

	j = 0;
	i = 0;
	words = count_words(str);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < words)
	{
		k = 0;
		while (str[j] == ' ')
			j++;
		len = letter(&str[j]);
		result[i] = malloc(len + 1);
		while (str[j] && str[j] != ' ')
		{
			result[i][k] = str[j];
			j++;
			k++;
		}
		result[i][k] = '\0';
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "sd g d hola  s que    sdfsd   gdfsatal asd s 18293- 42- 3.2-f3-.";
	int	words = count_words(str);
	int	i = 0;
	char **result = ft_split(str);

	while (i < words)
	{
		printf("%s ", result[i]);
		i++;
	}
	return (0);
}*/
