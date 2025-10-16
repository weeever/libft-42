/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:29:29 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/16 12:19:41 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pt1, const void *pt2, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while ((((unsigned char *)pt1)[i] == ((unsigned char *)pt2)[i])
	&& i != size - 1)
		i++;
	return ((((unsigned char *)pt1)[i]) - ((unsigned char *)pt2)[i]);
}
