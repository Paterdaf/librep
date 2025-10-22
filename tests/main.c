/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:34:55 by dloic             #+#    #+#             */
/*   Updated: 2025/10/20 16:30:39 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"



int	main(void)
{
	int	passed;
	int	total;
	t_test_unit tests;

	passed = 0;
	total = 0;

	tests = create_is_tests();
	passed += run_is_tests(tests, isalpha, ft_isalpha);
	passed += run_is_tests(tests, isascii, ft_isascii);
	passed += run_is_tests(tests, isdigit, ft_isdigit);
	passed += run_is_tests(tests, isprint, ft_isprint);

//	passed += run_tests(tests, memset, ft_memset);
	printf("Passed %d out of %d\n", passed, total);
	return (0);
}
