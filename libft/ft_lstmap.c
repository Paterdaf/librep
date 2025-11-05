/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:34:34 by dloic             #+#    #+#             */
/*   Updated: 2025/11/03 16:09:30 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*res;

	res = ft_lstnew(f(lst.content));
	if (!res)
		return (0);
	res.next = tmp;
	while (lst.next)
	{
		tmp = ft_lstnew(f(lst.next.content));
		if (!tmp)
			{
				ft_lstclear(res, del);
				return (0);
			}
		tmp = tmp.next;
		lst = lst.next;
	}
	return (res);
}
