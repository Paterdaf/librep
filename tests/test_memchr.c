/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:01:36 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 16:03:57 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>

int run_memchr_tests(int count, t_test_unit *tests)
{
	int     i;
	int     correct;
	char    *result;
	char    *expected_result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = ft_memchr(tests[i].s, tests[i].c, tests[i].n);
		expected_result = memchr(tests[i].s, tests[i].c, tests[i].n);
		correct += 	print_result(!memcmp(result, expected_result, tests[i].n),
					tests[i].desc, i + 1);
		printf  (GREY "\tExpected : %s, got : %s\n", expected_result, result);
		i++;
	}
	return (correct);
}

int create_memchr_tests(void)
{
	int count;
	t_test_unit tests[] =
	{
		{.desc = "texte vide",
		.s = "",
		.c = 0,
		.n = 0}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_memchr_tests(count, tests) == count);
}
