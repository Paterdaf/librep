/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:52:07 by dloic             #+#    #+#             */
/*   Updated: 2025/11/03 18:33:58 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	newlst;

	while (lst->next)
	{
		newlst = lst->next;
		ft_lstdelone(*lst, del);
		lst = newlst;
	}
	lst = 0;
}
