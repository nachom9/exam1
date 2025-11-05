
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	bit;
	int	i = 0;

	while (i <= 8)
	{
		bit = (octet >> i & 1) + '0';
		i++;
	}
}
