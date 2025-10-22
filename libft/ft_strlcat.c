/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:35:28 by dloic             #+#    #+#             */
/*   Updated: 2025/10/21 15:39:10 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (i + j < size - 1 && src[j])
	{
		dst[i + j] = src[j];
		printf("test : %s, %c, %lu\n", dst, src[j], i+j);
		j++;
	}
	dst[i + j] = 0;
	while (src[j])
		j++;
	printf("\n%s\n", dst);
	return (i + j);
}
/*
//#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>
int	main(void)
{
	size_t	size;
	char	dest[] = "00000000000000";
	char	dest2[] = "00000000000000";

	size = ft_strlcat(dest, "lorem", 20);
	printf("ft fichier : %s, ft size : %zu\n", dest, size);
	size = strlcat(dest2, "lorem", 20);
	printf("og fichier : %s, og size : %zu\n", dest2, size);
	return (0);
}
*/
