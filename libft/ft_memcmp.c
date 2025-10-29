/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:43:39 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 16:23:47 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_abs(int j)
{
	if (j < 0)
		return (-j);
	return (j);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*s1_str;
	const char	*s2_str;

	i = 0;
	s1_str = (const char *)s1;
	s2_str = (const char *)s2;
	while (i < n)
	{
		if(s1_str[i] != s2_str[i])
			return (ft_abs(s1_str[i]) - ft_abs(s2_str[i]));
		i++;
	}
	return (0);
}
