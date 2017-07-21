#ifndef ZZ_HEADER
# define ZZ_HEADER
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

void zz_putchar(char c);
void zz_putstr(char *str);
void zz_s_and_r(char *str, char *target, char *new);
void zz_ulstr(char *str);
unsigned char	zz_reverse_bits(unsigned char octet);

#endif
