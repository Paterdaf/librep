/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:01:36 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 16:34:49 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <bsd/string.h>

int run_strnstr_tests(int count, t_test_unit *tests)
{
	int     i;
	int     correct;
	char    *result;
	char    *expected_result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = ft_strnstr(tests[i].s, tests[i].s2, tests[i].n);
		expected_result = strnstr(tests[i].s, tests[i].s2, tests[i].n);
		correct += 	print_result(!memcmp(result, expected_result, tests[i].n),
					tests[i].desc, i + 1);
		printf  (GREY "\tExpected : %s, got : %s\n", expected_result, result);
		i++;
	}
	return (correct);
}

int create_strnstr_tests(void)
{
	int count;
	t_test_unit tests[] =
	{
		{.desc = "texte vide",
		.s = "",
		.s2 = "",
		.n = 0}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_strnstr_tests(count, tests) == count);
}
