/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:30:37 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 16:32:39 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"
#include <string.h>
#include <stdlib.h>

int	run_atoi_tests(int count, t_test_unit *tests)
{
	int	i;
	int	correct;
	int	result;

	i = 0;
	correct = 0;
	while (i < count)
	{
		result = 	ft_atoi(tests[i].s) == atoi(tests[i].s);
		correct +=	print_result(result, tests[i].desc, i + 1);
		printf	(GREY "	Expected : %d, got : %d\n",
				atoi(tests[i].s), ft_atoi(tests[i].s));
		i++;
	}
	return (correct);
}

int	create_atoi_tests(void)
{
	int	count;
	t_test_unit	tests[] = 
	{
		{.desc = "texte vide",
		.s = ""},
		{.desc = "texte plein",
		.s = "-254"}
	};

	count = sizeof(tests)/sizeof(tests[0]);
	return (run_atoi_tests(count, tests) == count);
}
