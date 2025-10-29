/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:30:37 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 10:03:25 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>

int	run_strlen_tests(int count, t_test_unit	*tests)
{
	int	i;
	int	correct;
	int	result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = 	ft_strlen(tests[i].s) == strlen(tests[i].s);
		correct +=	print_result(result, tests[i].desc, i + 1);
		printf	(GREY "	Expected : %ld, got : %zd\n",
				strlen(tests[i].s), ft_strlen(tests[i].s));
		i++;
	}
	return (correct);
}

int	create_strlen_tests(void)
{
	int	count;
	t_test_unit	tests[] = 
	{
		{.desc = "texte vide",
		.s = ""},
		{.desc = "texte plein",
		.s = ""}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_strlen_tests(count, tests) == count);
}
