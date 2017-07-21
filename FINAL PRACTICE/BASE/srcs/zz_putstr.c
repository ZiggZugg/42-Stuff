#include "../includes/zz_header.h"

void zz_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		zz_putchar(str[i]);
		i++;
	}
	zz_putchar('\0');
}
