/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:20:14 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 10:01:04 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"

int run_isalpha_tests(int count, t_test_unit *tests)
{
	int	i;
	int correct;

	i = 0;
	correct = 0;
	while (i < count)
	{
		correct +=  print_result((ft_isalpha(tests[i].c) == isalpha(tests[i].c)),
					tests[i].desc, i+1);
		printf  (GREY " Expected : %d, got : %d\n",
				isalpha(tests[i].c), ft_isalpha(tests[i].c));
		i++;
	}
	return (correct);
}

int	create_isalpha_tests(void)
{
	int count;
	t_test_unit tests[] =
	{
		{.desc = "valeur non alphanumerique",
		 .c = ':'},
		{.desc = "lettre minuscule",
		 .c = 'b'},
		{.desc = "lettre majuscule",
		 .c = 'B'},
		{.desc = "chiffre",
		 .c = '4'},
		{.desc = "valeur non ecrivable",
		 .c = 4},
		{.desc = "nombre trop grand",
		 .c = 2684},
		{.desc = "valeur negative",
		 .c = -5}
	};
	count = sizeof(tests)/sizeof(tests[0]);
	return (run_isalpha_tests(count, tests) == count);
}
