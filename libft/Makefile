CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = $(wildcard ft_*.c)
OFILES = $(CFILES:.c=.o)
LIBNAME = libft.a
HEADERS = libft.h

all: $(LIBNAME) clean

$(LIBNAME): $(OFILES)
	ar rcs $(LIBNAME) $(OFILES) $(HEADERS)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(LIBNAME)

re: fclean $(LIBNAME)

.PHONY: all clean fclean re
