/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:29:29 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/15 17:14:45 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memblock, int search, size_t size)
{
	size_t	i;

	i = 0;
	while (i != size)
	{
		if (((char *)memblock)[i] == (char)search)
		{
			return ((void *)memblock + i);
		}
		i++;
	}
	return (NULL);
}
