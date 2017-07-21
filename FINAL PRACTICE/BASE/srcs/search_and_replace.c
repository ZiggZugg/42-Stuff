#include "../includes/zz_header.h"

void zz_s_and_r(char *str, char *target, char *new)
{
	char *start;
	char *mkr;
	char *tstart;
	char *nstart;

	start = str;
	tstart = target;
	nstart = new;
	while (*str)
	{
		mkr = str;
		target = tstart;
		new = nstart;
		while (*str == *target && *target)
		{
			str++;
			target++;
			new = nstart;
			while (!*target && *new)
				*mkr++ = *new++;
		}
		str++;
	}
	str = start;
	target = tstart;
	new = nstart;

	zz_putstr(str);
}
