/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:30:14 by dloic             #+#    #+#             */
/*   Updated: 2025/11/12 15:02:36 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;
	int	find;

	i = 0;
	find = 0;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			pos = i;
			find = 1;
		}
		i++;
	}
	if (find)
		return ((char *)s + pos);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf	("or : %s, ft : %s\n", strrchr("tripouille", 't' + 256),
			ft_strrchr("tripouille", 't' + 256));
	return (0);
}
*/
