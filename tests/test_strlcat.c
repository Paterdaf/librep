/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:31:16 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 14:34:28 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <bsd/string.h>

int run_strlcat_tests(int count, t_test_unit *tests)
{
	int i;
	int correct;

	i = 0;
	correct = 0;
	while (i < count)
	{
		ft_strlcat(tests[i].dest, tests[i].src, tests[i].n);
//		strlcat(tests[i].dest, tests[i].src, tests[i].n);
		correct += print_result(!strcmp(tests[i].dest, tests[i].result), tests[i].desc, i+1);
		printf  (GREY "\tExpected : %s, got : %s\n",
						(char *)tests[i].result, (char *)tests[i].dest);
		i++;
	}
	return (correct);
}

int create_strlcat_tests(void)
{
	int         count;
	t_test_unit tests[] =
	{
		{.desc = "",
		.dest = "",
		.src = "",
		.n = 0,
		.result = ""}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_strlcat_tests(count, tests) == count);
}
