/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:32:20 by dloic             #+#    #+#             */
/*   Updated: 2025/10/20 15:59:32 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libtest.h"
#include "../ft_memset.c"

int	run_memset_tests(t_test_unit *tests, int count)
{
	int 	i;
	int 	error;
	void	*result;
	void	*expected_result;

	i = 0;
	error = 0;
	while (i < count)
	{
		result = ft_memset(tests[i].s, tests[i].c, tests[i].n);
		expected_result = memset(tests[i].s, tests[i].c, tests[i].n);
		error += !(print_result((result == expected_result), tests[i].desc, i+1));
		i++;
	}
	return (error);
}

int create_memset_tests(void)
{
	int count;
	t_test_unit tests[] =
	{
		{.desc = "",
		 .s = "",
		 .c = 0,
		 .n = 0}
	};
	printf("memset :\n");
	count = sizeof(tests)/sizeof(tests[0]);
	return (run_memset_tests(tests, count));
}
