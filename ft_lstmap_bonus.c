/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:29:06 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/22 17:12:54 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*second;

	if(lst)
	{
		second = malloc((sizeof lst));
		if (second == NULL)
			return(NULL);
		while (lst)
		{
			tmp = lst->content;
			f(tmp);
			second = ft_lstnew(tmp);
			if (second == NULL)
			{
				ft_lstclear(&second, del);
				return (NULL);
			}
			ft_lstadd_back(&second, tmp);
			second = second->next;
			lst = lst->next;
		}
		return (second);
	}
	return (NULL);
}
