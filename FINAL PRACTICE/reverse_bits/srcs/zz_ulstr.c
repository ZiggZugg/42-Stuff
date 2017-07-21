#include "../includes/zz_header.h"

void zz_ulstr(char *str)
{
	char *start;

	start = str;
	while(*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		else if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	str = start;
	zz_putstr(str);
}
