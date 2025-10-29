/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:07:16 by dloic             #+#    #+#             */
/*   Updated: 2025/10/29 11:21:03 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (size && nmemb > 2147483647/size)
		return (0);
	res = malloc(size * nmemb);
	if (!res)
		return (0);
	ft_bzero(res, nmemb * size);
	return (res);
}
