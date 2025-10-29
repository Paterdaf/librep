/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:08:23 by dloic             #+#    #+#             */
/*   Updated: 2025/10/29 11:56:07 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s)
		return (0);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = 0;
	while (s[start + i] && i < len && start < ft_strlen(s))
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*res;

	res = ft_substr("tripouille", 100, 1);
	printf("ret : %s\n", res);
	return (0);
}
*/
