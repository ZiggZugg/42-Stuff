#include "../includes/zz_header.h"

int main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		zz_s_and_r(argv[1], argv[2], argv[3]);
	}
	else
		zz_putchar('\n');
	return 0;
}
