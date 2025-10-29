/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:49:59 by dloic             #+#    #+#             */
/*   Updated: 2025/10/29 12:50:23 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIB_H
# define TESTLIB_H

#include <stdio.h>
#include <ctype.h>
#include "constants.h"
#include "../libft/libft.h"

typedef struct s_test_unit
{
	char			*desc;
	size_t			n;
	size_t			size;
	int				c;
	unsigned int	start;
	void			*s;
	void			*s2;
	const void		*src;
	void			*dest;
	void			*result;
	const char		*str1;
	const char		*str2;
}	t_test_unit;

int	print_result(int results, char *desc, int count);
int	create_isalpha_tests(void);
int	create_isdigit_tests(void);
int	create_isalnum_tests(void);
int	create_isascii_tests(void);
int	create_isprint_tests(void);
int	create_memset_tests(void);
int	create_strlen_tests(void);
int	create_bzero_tests(void);
int	create_memcpy_tests(void);
int create_memmove_tests(void);
int create_strlcpy_tests(void);
int create_strlcat_tests(void);
int create_toupper_tests(void);
int create_tolower_tests(void);
int create_strchr_tests(void);
int create_strrchr_tests(void);
int create_strncmp_tests(void);
int create_memchr_tests(void);
int create_memcmp_tests(void);
int create_strnstr_tests(void);
int create_atoi_tests(void);
int create_calloc_tests(void);
int create_strdup_tests(void);
int create_substr_tests(void);
int create_strjoin_tests(void);
int create_strtrim_tests(void);
int create_split_tests(void);
int create_itoa_tests(void);
int create_strmapi_tests(void);
int create_striteri_tests(void);
int create_putchar_fd_tests(void);
int create_putstr_fd_tests(void);
int create_putendl_fd_tests(void);
int create_putnbr_fd_tests(void);

# endif
