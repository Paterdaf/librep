/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:55:29 by dloic             #+#    #+#             */
/*   Updated: 2025/11/12 15:29:06 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= '\a' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (!ft_isdigit(nptr[i]))
		return (0);
	while (ft_isdigit(nptr[i]))
	{
		res = (10 * res) + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(void)
{
	return (0);
}
