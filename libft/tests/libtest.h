/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:49:59 by dloic             #+#    #+#             */
/*   Updated: 2025/10/16 12:59:59 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIB_H
# define TESTLIB_H

#include <stdio.h>
#include <ctype.h>

typedef struct s_test_unit
{
	char		*desc;
	int			c;
}	t_test_unit;

int create_isalpha_tests(void);
int create_isdigit_tests(void);
int create_isalnum_tests(void);
int create_isascii_tests(void);

# endif
