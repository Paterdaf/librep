/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:40:49 by dloic             #+#    #+#             */
/*   Updated: 2025/10/29 13:04:02 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>
#include <stdlib.h>

int run_split_tests(int count, t_test_unit *tests)
{
	int     i;
	int     correct;
	char	**result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = ft_split(tests[i].str1, tests[i].c);
//		correct += print_result(!strcmp(result, (char *)tests[i].result), tests[i].desc, i+1);
//		printf	(GREY "\tExpected : %s, got : %s\n",
//				(char *)tests[i].result, result);
		i++;
		free(result);
	}
	return (correct);
}

int create_split_tests(void)
{
	int         count;
	t_test_unit tests[] =
	{
		{.desc = "args vides",
		.str1 = "",
		.c = 'c',
		.result = ""},
	};
	count = sizeof(tests)/sizeof(tests[0]);
	return (run_split_tests(count, tests) == count);
}
