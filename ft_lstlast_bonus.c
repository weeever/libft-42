/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:45:43 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/23 11:20:42 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*before;

	if (lst == NULL)
		return (NULL);
	before = lst;
	while (lst != NULL)
	{
		before = lst;
		lst = lst->next;
	}
	return (before);
}
