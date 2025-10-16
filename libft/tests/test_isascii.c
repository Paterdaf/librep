/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:18:00 by dloic             #+#    #+#             */
/*   Updated: 2025/10/16 12:58:01 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"
#include "../ft_isascii.c"

int run_isascii_tests(t_test_unit *tests, int count)
{
	int	i;
	int error;
	int	result;
	int	expected_result;

	i = 0;
	error = 0;
	while (i < count)
	{
		result = ft_isascii(tests[i].c);
		expected_result = isascii(tests[i].c);
		if (result != expected_result)
		{
			printf("[%d] %s\nExpected \"%d\", got \"%d\"\n", i+1, tests[i].desc, expected_result, result);
			error = -1;
		}
		else
		{
			printf("[%d] %s\nExpected \"%d\", got \"%d\"\n", i+1, tests[i].desc, expected_result, result);
		}
		i++;
	}
	return (error);
}

int	create_isascii_tests(void)
{
	int count;
	t_test_unit tests[] =
	{
		{.desc = "valeur non alphanumerique",
		 .c = ':'},
		{.desc = "lettre minuscule",
		 .c = 'b'},
		{.desc = "lettre majuscule",
		 .c = 'B'},
		{.desc = "chiffre",
		 .c = '4'},
		{.desc = "valeur non ecrivable",
		 .c = 4},
		{.desc = "nombre trop grand",
		 .c = 2684},
		{.desc = "valeur negative",
		 .c = -5}
	};
	
	count = sizeof(tests)/sizeof(tests[0]);
	run_isascii_tests(tests, count);
	return (0);
}
