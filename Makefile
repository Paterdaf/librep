# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dloic <dloic@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 15:09:10 by dloic             #+#    #+#              #
#    Updated: 2025/11/12 15:34:46 by dloic            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = ./srcs
OBJ_DIR = ./objs
BONUS_DIR = ./bonus
FILES		= 	ft_atoi ft_bzero ft_calloc \
				ft_isalnum ft_isalpha ft_isascii \
				ft_isdigit ft_isprint ft_itoa \
				ft_memchr ft_memcmp ft_memcpy \
				ft_memmove ft_memset ft_putchar_fd \
				ft_putendl_fd ft_putnbr_fd ft_putstr_fd \
				ft_split ft_strchr ft_strdup \
				ft_striteri ft_strjoin ft_strlcat \
				ft_strlcpy ft_strlen ft_strmapi \
				ft_strncmp ft_strnstr ft_strrchr \
				ft_strtrim ft_substr ft_tolower \
				ft_toupper
BONUS_FILES =	ft_lstnew ft_lstadd_front \
				ft_lstsize ft_lstlast \
				ft_lstadd_back ft_lstdelone \
				ft_lstclear ft_lstiter \
				ft_lstmap
SRCS = $(addprefix $(SRC_DIR)/, $(FILES:=.o))
BONUS_SRCS = $(addprefix $(BONUS_DIR)/, $(FILES:=.o))
OBJS = $(addprefix $(OBJ_DIR)/, $(FILES:=.o))
BONUS_OBJS = $(addprefix $(OBJ_DIR)/, $(BONUS_FILES:=.o))

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

bonus: $(OBJ_DIR) $(OFILES) $(OBFILES)
	ar rcs $(name) $(OBJ_DIR)/$(OFILES) $(OBJ_DIR)/$(OBFILES)

.PHONY: all clean fclean re bonus
