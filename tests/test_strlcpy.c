/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:15:46 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 14:28:41 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <bsd/string.h>

int run_strlcpy_tests(int count, t_test_unit *tests)
{
	int i;
	int correct;

	i = 0;
	correct = 0;
	while (i < count)
	{
		ft_strlcpy(tests[i].dest, tests[i].src, tests[i].n);
//		strlcpy(tests[i].dest, tests[i].src, tests[i].n);
		correct += print_result(!strcmp(tests[i].dest, tests[i].result), tests[i].desc, i+1);
		printf  (GREY "\tExpected : %s, got : %s\n",
				(char *)tests[i].result, (char *)tests[i].dest);
		i++;
	}
	return (correct);
}

int	create_strlcpy_tests(void)
{
	int			count;
	t_test_unit	tests[] =
	{
		{.desc = "",
		.dest = "",
		.src = "",
		.n = 0,
		.result = ""}
	};
	
	count = sizeof(tests)/sizeof(tests[0]);
	return (run_strlcpy_tests(count, tests) == count);
}
