/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:14:42 by dloic             #+#    #+#             */
/*   Updated: 2025/11/12 14:59:24 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

static void	sub_ft_putnbr_fd(int n, int fd)
{
	if (n / 10)
		sub_ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(-(n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n > 0)
		n = -n;
	else if (n < 0)
		ft_putchar_fd('-', fd);
	sub_ft_putnbr_fd(n, fd);
}
