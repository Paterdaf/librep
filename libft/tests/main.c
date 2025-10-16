/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:34:55 by dloic             #+#    #+#             */
/*   Updated: 2025/10/16 12:59:26 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"

int	main(void)
{
	int passed;
	int total;

	passed = 0;
	passed += create_isalpha_tests();
	passed += create_isdigit_tests();
	passed += create_isalnum_tests();
	passed += create_isascii_tests();
	total = 4;
	printf("Passed %d out of %d\n", passed, total);
	return (0);
}
