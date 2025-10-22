/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:37:18 by dloic             #+#    #+#             */
/*   Updated: 2025/10/21 16:24:11 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str_dest;
	const char	*str_src;

	i = n;
	str_dest = (char *)dest;
	str_src = (const char *)src;
	while (i > 0)
	{
		str_dest[n - i] = str_src[n - i];
		i--;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <string.h>
int	main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	char	*dest2;
	
	dest = src + 1;
	dest2 = src + 1;
	ft_memmove(dest, src, 8);
	write(1, "ft dest et src :\n", 17);
	write(1, dest, 22);
	write(1, "\n", 1);
	write(1, src, 22);
	write(1, "\n", 1);
	memmove(dest2, src, 8);
	write(1, "og dest et src :\n", 17);
	write(1, dest2, 22);
	write(1, "\n", 1);
	write(1, src, 22);
	write(1, "\n", 1);
	return (0);
}
*/
