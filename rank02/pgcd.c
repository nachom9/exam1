
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	div = 1;
	unsigned int	result;

	if (argc != 3)
		return(printf("\n"), 0);
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	while (div <= a)
	{
		if (a % div == 0 && b % div == 0)
			result = div;
		div++;
	}
	printf("%d\n", result);
	return (0);
}
