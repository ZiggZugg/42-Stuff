CC = gcc
CFILES = srcs/*.c
OFILES = *.o
CFLAGS ?= -Wall -Wextra -Werror -fsanitize=address
CFLAGS += -I includes/
LIBNAME = zz_lib.a
NAME = fttest

exec: all
	@$(CC) -I. -o $(NAME) $(CFILES)

all: $(LIBNAME)

$(LIBNAME): $(OFILES)
	@ar rc $(LIBNAME) $(CFILES)

$(OFILES): $(CFILES)
	@$(CC) -c $(CFLAGS) $(CFILES)

clean:
	@/bin/rm -f $(OFILES)

fclean:
	@/bin/rm -f $(OFILES) $(LIBNAME) $(NAME)

re: fclean all exec
