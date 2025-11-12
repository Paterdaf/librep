/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:13:18 by dloic             #+#    #+#             */
/*   Updated: 2025/11/12 14:59:52 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

static int	count_words(char const *s, char c)
{
	int	res;
	int	i;
	int	was_c;

	res = 0;
	i = 0;
	was_c = 1;
	while (s[i])
	{
		if (s[i] == c)
			was_c = 1;
		else if (was_c)
		{
			was_c = 0;
			res++;
		}
		i++;
	}
	return (res);
}

static void	*free_all(char	**array, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		len;
	int		words_index;
	int		i;

	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (0);
	i = 0;
	words_index = 0;
	while (words_index < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		len = (char *)ft_strchr(s + i, c) - (char *)(s + i);
		if (!ft_strchr(s + i, c))
			len = ft_strlen(s + i);
		res[words_index] = ft_substr(s, i, len);
		if (!res[words_index])
			return (free_all(res, words_index));
		i += len;
		words_index++;
	}
	res[words_index] = 0;
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**res;
	int	i;

	res = ft_split("How are you now, new test?", ' ');
	i = 0;
	while (res[i])
	{
		printf("ligne : %s\n", res[i]);
		i++;
	}
	if (!res[0])
		printf("vide\n");
	free_all(res, sizeof(res) - 1);
	return (0);
}
*/
