
int	    is_power_of_2(unsigned int n)
{
	unsigned int	m;
	m = 2;

	while (m <= n)
	{
		if (n == m)
			return (1);
		m *= 2;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", is_power_of_2(254));
	return (0);
}*/
