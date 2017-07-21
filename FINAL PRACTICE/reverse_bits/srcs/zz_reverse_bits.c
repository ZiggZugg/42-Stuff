#include "../includes/zz_header.h"

unsigned char	zz_reverse_bits(unsigned char octet)
{
	int i;

	i = 0;
	while (i < 8)
	{
		printf("%u\n", octet);
		i++;
		octet = octet << 1;
	}
	return octet;
}
