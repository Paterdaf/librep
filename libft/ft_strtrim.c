/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:10:38 by dloic             #+#    #+#             */
/*   Updated: 2025/11/03 14:07:25 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (0);
	while (set[i] && end > 0 && start < end)
	{
		if (set[i] == s1[start])
		{
			start++;
			i = 0;
		}
		else if (set[i] == s1[end - 1])
		{
			end--;
			i = 0;
		}
		else
			i++;
	}
	return (ft_substr(s1, start, end - start));
}
