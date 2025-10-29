/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:40:49 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 16:45:23 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>
#include <stdlib.h>

int run_strdup_tests(int count, t_test_unit *tests)
{
	int     i;
	int     correct;
	char	*result;
	char	*expected_result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = ft_strdup(tests[i].s);
		expected_result = strdup(tests[i].s);
		correct += 	print_result(!strcmp(result, expected_result),
					tests[i].desc, i+1);
		printf	(GREY "\tExpected : %s, got : %s\n", expected_result, result);
		i++;
		free(result);
		free(expected_result);
	}
	return (correct);
}

int create_strdup_tests(void)
{
	int         count;
	t_test_unit tests[] =
	{
		{.desc = "",
		.s = ""}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_strdup_tests(count, tests) == count);
}
