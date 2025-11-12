/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:07:16 by dloic             #+#    #+#             */
/*   Updated: 2025/11/12 14:51:55 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (size && (nmemb * size) / size != nmemb)
		return (0);
	if (!nmemb || !size)
	{
		nmemb = 1;
		size = 1;
	}
	res = malloc(size * nmemb);
	if (!res)
		return (0);
	ft_bzero(res, nmemb * size);
	return (res);
}
