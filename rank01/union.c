
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	stack[256];
	int	i = 0;
	int	j = 0;
	int	k = 0;
	int	check;

	if (argc != 3)
		return (write(1, "\n", 1), 0);
	while (argv[1][i])
	{
		check = 0;
		j = 0;
		while (check == 0 && stack[j])
		{
			if (argv[1][i] == stack[j])
			{
				check = -1;
				j--;
			}
			j++;
		}
		if (check == 0)
		{
			write(1, &argv[1][i], 1);
			stack[k] = argv[1][i];
			k++;
		}
		i++;
	}

	i = 0;
	while (argv[2][i])
        {
                check = 0;
                j = 0;
                while (check == 0 && stack[j])
                {
                        if (argv[2][i] == stack[j])
                        {
                                check = -1;
                                j--;
                        }
                        j++;
                }
                if (check == 0)
                {
                        write(1, &argv[2][i], 1);
                        stack[k] = argv[2][i];
                        k++;
                }
                i++;
        }

	return (write(1, "\n", 1), 0);
}
