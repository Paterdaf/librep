/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:30:37 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 16:21:22 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>

int	run_memcmp_tests(int count, t_test_unit *tests)
{
	int	i;
	int	correct;
	int	result;
	int	expected_result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = ft_memcmp(tests[i].s, tests[i].s2, tests[i].n);
		expected_result = memcmp(tests[i].s, tests[i].s2, tests[i].n);
		correct +=	print_result((result == expected_result), tests[i].desc, i + 1);
		printf	(GREY "	Expected : %d, got : %d\n",
				expected_result, result);
		i++;
	}
	return (correct);
}

int	create_memcmp_tests(void)
{
	char	s_test[] = {-128, 0, 127, 0};
	int	count;
	t_test_unit	tests[] = 
	{
		{.desc = "textes vide",
		.s = "",
		.s2 = "",
		.n = 0},
		{.desc = "",
		.s = s_test,
		.s2 = "\0\0\127\0",
		.n = 1},
		{.desc = "apres caracteres vides",
		.s = "\0\0\127\0",
		.s2 = "\0\0\42\0",
		.n = 4}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_memcmp_tests(count, tests) == count);
}
