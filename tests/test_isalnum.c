/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:18:00 by dloic             #+#    #+#             */
/*   Updated: 2025/10/20 16:10:23 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"
#include "../ft_isalnum.c"

int	create_isalnum_tests(void)
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
	printf("isalnum :\n");
	count = sizeof(tests)/sizeof(tests[0]);
	return(run_is_tests(count, tests, isalnum, ft_isalnum));
}
