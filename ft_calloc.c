/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:40:45 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/16 12:20:27 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void		*stock;
	size_t		j;

	if (elementCount != 0 && elementSize > SIZE_MAX / elementCount)
		return (0);
	j = (elementCount * elementSize);
	stock = malloc(j);
	if (!stock)
		return (NULL);
	ft_memset(stock, 0, j);
	return (stock);
}
