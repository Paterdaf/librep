/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:30:37 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 15:54:01 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>

int	run_strncmp_tests(int count, t_test_unit *tests)
{
	int	i;
	int	correct;
	int	result;
	int	expected_result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = ft_strncmp(tests[i].s, tests[i].s2, tests[i].n);
		expected_result = strncmp(tests[i].s, tests[i].s2, tests[i].n);
		correct +=	print_result((result == expected_result), tests[i].desc, i + 1);
		printf	(GREY "	Expected : %d, got : %d\n",
				expected_result, result);
		i++;
	}
	return (correct);
}

int	create_strncmp_tests(void)
{
	int	count;
	t_test_unit	tests[] = 
	{
		{.desc = "textes vide",
		.s = "",
		.s2 = "",
		.n = 0}
	};
	count = sizeof(tests)/sizeof(tests[0]);
	return (run_strncmp_tests(count, tests) == count);
}
