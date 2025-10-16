/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:20:14 by dloic             #+#    #+#             */
/*   Updated: 2025/10/16 12:43:17 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include "../ft_isalpha.c"

int run_isalpha_tests(t_test_unit *tests, int count)
{
	int	i;
	int error;
	int	result;
	int	expected_result;

	i = 0;
	error = 0;
	while (i < count)
	{
		result = ft_isalpha(tests[i].c);
		expected_result = isalpha(tests[i].c);
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

int	create_isalpha_tests(void)
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
	run_isalpha_tests(tests, count);
	return (0);
}
