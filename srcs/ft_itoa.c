/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:11:37 by dloic             #+#    #+#             */
/*   Updated: 2025/11/12 14:53:35 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

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
	int		index;
	char	*res;

	len = create_res(n);
	index = len;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[0] = 0;
	if (n > 0)
		n = -n;
	else if (n < 0)
		res[0] = '-';
	while (index > (res[0] == '-'))
	{
		index--;
		res[index] = -(n % 10) + '0';
		n = n / 10;
	}
	res[len] = 0;
	return (res);
}
