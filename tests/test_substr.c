/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:40:49 by dloic             #+#    #+#             */
/*   Updated: 2025/10/29 13:31:57 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>
#include <stdlib.h>

int run_substr_tests(int count, t_test_unit *tests)
{
	int     i;
	int     correct;
	char	*result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = ft_substr(tests[i].s, tests[i].start, tests[i].n);
		correct += print_result(!strcmp(result, (char *)tests[i].result), tests[i].desc, i+1);
		printf	(GREY "\tExpected : %s, got : %s\n",
				(char *)tests[i].result, result);
		i++;
		free(result);
	}
	return (correct);
}

int create_substr_tests(void)
{
	char	*str = strdup("1");
	int         count;
	t_test_unit tests[] =
	{
		{.desc = "args vides",
		.s = "",
		.start = 0,
		.n = 0,
		.result = ""},
		{.desc = "n trop grand",
		.s = "tripouille",
		.start = 0,
		.n = 42000,
		.result = "tripouille"},
		{.desc = "start trop grand",
		.s = "tripouille",
		.start = 100,
		.n = 1,
		.result = ""},
		{.desc = "str duplique",
		.s = str,
		.start = 42,
		.n = 42000000,
		.result = ""},
		{.desc = "recherche classique",
		.s = "0123456789",
		.start = 9,
		.n = 10,
		.result = "9"}
	};
	free(str);
	count = sizeof(tests)/sizeof(tests[0]);
	return (run_substr_tests(count, tests) == count);
}
