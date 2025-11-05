
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bit;
	int	i = 8;

	while (i >= 0)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
		i--;
	}
}
/*
int	main(void)
{
	unsigned char	octet = 3;
	print_bits(octet);
	return (0);
}*/
