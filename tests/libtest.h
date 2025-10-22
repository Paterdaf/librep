/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:49:59 by dloic             #+#    #+#             */
/*   Updated: 2025/10/20 16:23:40 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIB_H
# define TESTLIB_H

#include <stdio.h>
#include <ctype.h>
#include "constants.h"

typedef struct s_test_unit
{
	char		*desc;
	size_t		n;
	int			c;
	void		*s;
}	t_test_unit;

int	print_result(int results, char *desc, int count);
int create_is_tests(char *f_name, int (*og_f)(int), int (*ft_f)(int));
int run_is_tests(int count, t_test_unit *tests, int (*og_f)(int), int (*ft_f)(int));
int	create_isalpha_tests(void);
int	create_isdigit_tests(void);
int	create_isalnum_tests(void);
int	create_isascii_tests(void);
int	create_isprint_tests(void);
int	create_memset_tests(void);

# endif
