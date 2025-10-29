/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:10:09 by dloic             #+#    #+#             */
/*   Updated: 2025/10/29 12:58:57 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libtest.h"

int print_result(int result, char *desc, int count)
{
	if (result)
		printf(GREEN "[%d] %s\n", count, desc);
	else
		printf(RED "[%d] %s\n", count, desc);
	return (result);
}

void	handle_f(int *score, char *f_name, int f_result)
{
	printf(DEFAULT "\t%s\n ---------------------\n\n", f_name);
	score[0] += f_result;
	score[1]++;
}

int	main(void)
{
	int	score[] = {0, 0};

	handle_f(score, "isalpha", create_isalpha_tests());
	handle_f(score, "isdigit", create_isdigit_tests());
	handle_f(score, "isalnum", create_isalnum_tests());
	handle_f(score, "isascii", create_isascii_tests());
	handle_f(score, "isprint", create_isprint_tests());
	handle_f(score, "strlen", create_strlen_tests());
	handle_f(score, "memset", create_memset_tests());
	handle_f(score, "bzero", create_bzero_tests());
	handle_f(score, "memcpy", create_memcpy_tests());
	handle_f(score, "memmove", create_memmove_tests());
	handle_f(score, "strlcpy", create_strlcpy_tests());
	handle_f(score, "strlcat", create_strlcat_tests());
	handle_f(score, "toupper", create_toupper_tests());
	handle_f(score, "tolower", create_tolower_tests());
	handle_f(score, "strchr", create_strchr_tests());
	handle_f(score, "strrchr", create_strrchr_tests());
	handle_f(score, "strncmp", create_strncmp_tests());
	handle_f(score, "memchr", create_memchr_tests());
	handle_f(score, "memcmp", create_memcmp_tests());
	handle_f(score, "strnstr", create_strnstr_tests());
	handle_f(score, "atoi", create_atoi_tests());
	handle_f(score, "calloc", create_calloc_tests());
	handle_f(score, "strdup", create_strdup_tests());
	handle_f(score, "substr", create_substr_tests());
	handle_f(score, "strjoin", create_strjoin_tests());
	handle_f(score, "strtrim", create_strtrim_tests());
//	handle_f(score, "split", create_split_tests());
//	handle_f(score, "itoa", create_itoa_tests());
//	handle_f(score, "strmapi", create_strmapi_tests());
//	handle_f(score, "striteri", create_striteri_tests());
//	handle_f(score, "putchar_fd", create_putchar_fd_tests());
//	handle_f(score, "putstr_fd", create_putstr_fd_tests());
//	handle_f(score, "putendl_fd", create_putendl_fd_tests());
//	handle_f(score, "putnbr_fd", create_putnbr_fd_tests());
	if (score[0] == score[1])
		printf(GREEN "passed [%d] out of [%d]\n", score[0], score[1]);
	else
		printf(RED "passed [%d] out of [%d]\n", score[0], score[1]);
	return (0);
}
