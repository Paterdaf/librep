/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:01:36 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 15:30:00 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>

int run_strrchr_tests(int count, t_test_unit *tests)
{
	int     i;
	int     correct;
	char    *result;
	char    *expected_result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = ft_strrchr(tests[i].s, tests[i].c);
		expected_result = strrchr(tests[i].s, tests[i].c);
		correct += print_result(!strcmp(result, expected_result), tests[i].desc, i + 1);
		printf  (GREY "\tExpected : %s, got : %s\n", expected_result, result);
		i++;
	}
	return (correct);
}

int create_strrchr_tests(void)
{
	int count;
	t_test_unit tests[] =
	{
		{.desc = "texte vide",
		.s = "",
		.c = 0},
		{.desc = "caractere invalide",
		.s = "tripouille",
		.c = 't' + 256}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_strrchr_tests(count, tests) == count);
}
