CC = cc
CFLAGS = -Wall -Wextra -Werror
ALTFILES =  -I. -L.. -lft
CFILES = $(wildcard *.c)
LIBNAME = libft.a
HEADERS = libft.h

all: main.o

main.o:
	$(CC) $(FLAGS) $(CFILES) -o main.o $(ALTFILES)

clean:
	rm -f main.o

re: clean main.o

.PHONY: all clean
