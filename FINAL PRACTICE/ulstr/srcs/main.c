#include "../includes/zz_header.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		zz_ulstr(argv[1]);
	}
	else
		zz_putchar('\n');
	return 0;
}
