/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:11:37 by dloic             #+#    #+#             */
/*   Updated: 2025/10/23 14:45:33 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	create_res(int n)
{
	int		len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	len = create_res(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
//	if (n < 0)
//	{
//		res[0] = '-';
//		n = -n; //TODO : attention overflow
//	}
	while (len > 0)
	{
		len--;
		res[len] = (n % 10) + '0';
		n = n / 10;
	}
	res[ft_strlen(res) + 1] = 0;
	return (res);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char	*res = ft_itoa(2150);
	write(1, res, ft_strlen(res));
	write(1, "\n", 1);
	write(1, &res[0], ft_strlen(res));
	free(res);
	return (0);
}
*/
