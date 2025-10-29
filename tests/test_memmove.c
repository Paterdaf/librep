/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:53:41 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 14:24:28 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>

int run_memmove_tests(int count, t_test_unit *tests)
{
	int	i;
	int	correct;

	i = 0;
	correct = 0;
	while (i < count)
	{
		ft_memmove(tests[i].dest, tests[i].src, tests[i].n);
//		memmove(tests[i].dest, tests[i].src, tests[i].n);
		correct += print_result(!strcmp(tests[i].dest, tests[i].result), tests[i].desc, i+1);
		printf  (GREY "\tExpected : %s, got : %s\n",
				(char *)tests[i].result, (char *)tests[i].dest);
		i++;
	}
	return (correct);
}

int create_memmove_tests(void)
{
	char		src[] = "ABCDE\0F";
	char		dest[] = "       ";
	int         count;
	t_test_unit tests[] =
	{
		{.desc = "result after 0",
		.dest = dest,
		.src = src,
		.n = 7,
		.result = "ABCDE"},
		{.desc = "decalage nul",
		.dest = src,
		.src = src + 2,
		.n = 0,
		.result = "ABCDE"},
		{.desc = "decalage vers l'avant",
		.dest = src,
		.src = src + 2,
		.n = 2,
		.result = "CDCDE"},
		{.desc = "decalage vers l'arriere",
		.dest = src + 1,
		.src = src,
		.n = 2,
		.result = "CDDE"}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_memmove_tests(count, tests) == count);
}

