/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runtests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:10:09 by dloic             #+#    #+#             */
/*   Updated: 2025/10/20 16:30:40 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libtest.h"

int print_result(int results, char *desc, int count)
{
	if (results)
		printf(GREEN "[%d] %s\n", count, desc);
	else
		printf(RED "[%d] %s\n", count, desc);
	return (!results);
}

int run_is_tests(int count, t_test_unit *tests, int (*og_f)(int), int (ft_f)(int))
{
	int i;
	int errors;

	i = 0;
	errors = 0;
	while (i < count)
	{
		errors += print_result((ft_f(tests[i].c) == og_f(tests[i].c)), tests[i].desc, i+1);
		i++;
	}
	return (errors);
}

int create_is_tests(char *f_name, int (*og_f)(int), int (*ft_f)(int))
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
		printf("%s :\n", f_name);
		count = sizeof(tests)/sizeof(tests[0]);
		return(run_is_tests(count, tests, og_f, ft_f));
}
