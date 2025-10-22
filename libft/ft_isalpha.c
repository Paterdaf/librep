/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:53:06 by dloic             #+#    #+#             */
/*   Updated: 2025/10/20 14:04:03 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
static int ft_isupper(int c)
{
	return ((unsigned int)(c - 'A') < 26);
}

static int ft_islower(int c)
{
	return ((unsigned int)(c-'a') < 26);
}
*/
int	ft_isalpha(int c)
{
	return ((unsigned)((c | 32) - 'a') < 26);
}
