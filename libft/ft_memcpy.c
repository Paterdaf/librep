/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:30:07 by dloic             #+#    #+#             */
/*   Updated: 2025/10/21 10:10:13 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str_dest;
	const char	*str_src;

	i = 0;
	str_dest = (char *)dest;
	str_src = (const char *)src;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (dest);
}
