
#include <unistd.h>

int main(int argc, char *argv[])
{
	int	i = 1;
	int 	j = 0;
	int	space = 1;

	if (argc < 2)
		return (write(1, "\n", 1), 0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] += 32;
			if (argv[i][j] == ' ' || argv[i][j] == '	')
			{	
				space = 1;
			}
			else if (argv[i][j] >= 'a' && argv[i][j] <= 'z' && space == 1)
			{
				argv[i][j] -= 32;
				space = 0;
			}
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
