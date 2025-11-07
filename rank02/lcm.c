
unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	result;
	unsigned int	mult_a = a;
	unsigned int	mult_b = b;

	if (!a || !b)
		result = 0;
	while(a != b)
	{
		if (a < b)
			a += mult_a;
		if (b < a)
			b += mult_b;
	}
	result = a;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("\n%d", lcm(9, 18));
	printf("\n%d", lcm(12, 15));
	printf("\n%d", lcm(7, 5));
	printf("\n%d", lcm(8, 14));
	printf("\n%d", lcm(6, 10));
	printf("\n%d", lcm(13, 17));
	printf("\n%d", lcm(36, 48));
	printf("\n%d", lcm(5, 25));
	printf("\n%d", lcm(4, 6));
	printf("\n%d", lcm(10, 20));
	return (0);
}*/
