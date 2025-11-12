/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:08:23 by dloic             #+#    #+#             */
/*   Updated: 2025/11/12 15:03:03 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	int		size;
	char	*res;

	size = len;
	if (start + len > ft_strlen(s))
		size = ft_strlen(s) - start;
	if (size < 0)
		size = 0;
	if (!s)
		return (0);
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < len && (start + i) < ft_strlen(s))
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
