/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:31:59 by dloic             #+#    #+#             */
/*   Updated: 2025/10/28 09:24:11 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*tmp;
	
	if (!n)
		return (0);
	i = 0;
	tmp = (char *)s;
	if (c == '\0')
		return (tmp + ft_strlen(s));
	while (i < n)
	{
		if (tmp[i] == (c % 256))
			return (tmp + i);
		i++;
	}
	return (0);
}
