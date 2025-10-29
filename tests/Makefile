CC = cc
CFLAGS = -g -Wall -Wextra -Werror -lbsd
ALTFILES =  -I. -L../libft -lft
CFILES = $(wildcard *.c)

all: main.o

main.o:
	$(CC) $(CFLAGS) $(CFILES) -o main.o $(ALTFILES)

clean:
	rm -f main.o

re: clean main.o

.PHONY: all clean re
