CC = cc
CFLAGS = -Wall -Wextra -Werror
ALTFILES =  -I. -L.. -lft
CFILES = $(wildcard test_*.c) main.c
OFILES = $(CFILES:.c=.o)
LIBNAME = libft.a
HEADERS = libft.h

all: main.o

main.o:
	$(CC) $(FLAGS) $(CFILES) -o main.o $(ALTFILES)

clean:
	rm -f $(OFILES)

re: clean main.o

.PHONY: all clean
