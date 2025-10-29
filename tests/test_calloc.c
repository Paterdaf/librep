/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:40:49 by dloic             #+#    #+#             */
/*   Updated: 2025/10/29 11:03:19 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int run_calloc_tests(int count, t_test_unit *tests)
{
	int     i;
	int     correct;
	char	*result;
	char	*expected_result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		//TODO : changer la verif pour voir la place allouee
		result = ft_calloc(tests[i].n, tests[i].size);
		expected_result = calloc(tests[i].n, tests[i].size);
		if (tests[i].size && tests[i].n >= 2147483647/tests[i].size)
			correct += print_result(!result, tests[i].desc, i+1);
		else
			correct += 	print_result(!memcmp(result, expected_result,
						tests[i].n * tests[i].size), tests[i].desc, i+1);
		printf	(GREY "\tExpected : %s, got : %s\n", expected_result, result);
		i++;
		free(result);
		free(expected_result);
	}
	return (correct);
}

int create_calloc_tests(void)
{
	int         count;
	t_test_unit tests[] =
	{
		{.desc = "taille nulle",
		.n = 0,
		.size = 0},
		{.desc = "arg 1 nul",
		.n = 0,
		.size = 5},
		{.desc = "arg 2 nul",
		.n = 5,
		.size = 0},
		{.desc = "size max",
		.n = SIZE_MAX,
		.size = SIZE_MAX},
		{.desc = "arg 1 negatif",
		.n = -5,
		.size = 0},
		{.desc = "arg 2 negatif",
		.n = 0,
		.size = -5},
		{.desc = "2 args negatifs",
		.n = -5,
		.size = -5}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_calloc_tests(count, tests) == count);
}
