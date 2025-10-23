/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weeever <weeever@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:53:50 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/23 16:43:22 by weeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*second;
	t_list	*tmp;
	void	*toclear;

	second = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		toclear = f(lst->content);
		tmp = ft_lstnew(toclear);
		if (!tmp)
		{
			del(toclear);
			ft_lstclear(&second, del);
			return (NULL);
		}
		ft_lstadd_back(&second, tmp);
		lst = lst->next;
	}
	return (second);
}
