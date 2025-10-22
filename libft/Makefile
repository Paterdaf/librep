# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dloic <dloic@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 15:09:10 by dloic             #+#    #+#              #
#    Updated: 2025/10/21 15:09:14 by dloic            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
