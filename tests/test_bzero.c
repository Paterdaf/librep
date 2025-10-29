/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:19:47 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 13:33:38 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>

int	run_bzero_tests(int count, t_test_unit *tests)
{
	int		i;
	int		correct;

	i = 0;
	correct = 0;
	while (i < count)
	{
		ft_bzero(tests[i].dest, tests[i].n);
//		bzero(tests[i].dest, tests[i].n);
		correct += print_result(!strcmp(tests[i].dest, tests[i].result), tests[i].desc, i+1);
		printf	(GREY "\tExpected : %s, got : %s\n",
				(char *)tests[i].result, (char *)tests[i].dest);
		i++;
	}
	return (correct);
}

int	create_bzero_tests(void)
{
	int			count;
	t_test_unit	tests[] =
	{
		{.desc = "",
		.dest = "",
		.n = 0,
		.result = ""}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_bzero_tests(count, tests) == count);
}
