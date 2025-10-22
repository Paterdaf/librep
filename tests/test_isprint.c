/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:18:00 by dloic             #+#    #+#             */
/*   Updated: 2025/10/20 15:53:40 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"
#include "../ft_isprint.c"

int	create_isprint_tests(void)
{
	int i;
	int error;
	int result;
	int expected_result;

	error = 0;
	i = 0;
	while (i < 128)
	{
		result = ft_isprint(i);
		expected_result = isprint(i);
		error += !(print_result((result == expected_result), "i :", i+1));
		i++;
	}
	return (error);
}
