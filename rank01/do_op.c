
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (write(1, "\n", 1), 0);
	if (argv[2][0] == '+')
		printf("%d", atoi(argv[1]) + atoi(argv[3]));
	else if (argv[2][0] == '-')
                printf("%d", atoi(argv[1]) - atoi(argv[3]));
	else if (argv[2][0] == '/')
                printf("%d", atoi(argv[1]) / atoi(argv[3]));
	else if (argv[2][0] == '*')
                printf("%d", atoi(argv[1]) * atoi(argv[3]));
	return (printf("\n"), 0);
}
