/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:18:00 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 14:26:56 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int run_isprint_tests(int count, t_test_unit *tests)
{
	int i;
	int correct;

	i = 0;
	correct = 0;
	while (i < count)
	{
		correct +=  print_result((ft_isprint(tests[i].c) == isprint(tests[i].c)),
					tests[i].desc, i+1);
		printf  (GREY " Expected : %d, got : %d\n",
				isprint(tests[i].c), ft_isalnum(tests[i].c));
		i++;
	}
	return (correct);
}

int	create_isprint_tests(void)
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
  return (run_isprint_tests(count, tests) == count);
}
