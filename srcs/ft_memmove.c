/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:37:18 by dloic             #+#    #+#             */
/*   Updated: 2025/11/12 14:58:20 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str_dest;
	const char	*str_src;

	str_dest = (char *)dest;
	str_src = (const char *)src;
	if (str_src < str_dest)
	{
		while (n)
		{
			n--;
			str_dest[n] = str_src[n];
		}
		return (dest);
	}
	i = 0;
	while (n)
	{
		n--;
		str_dest[i] = str_src[i];
		i++;
	}
	return (dest);
}
