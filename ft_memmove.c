/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:03:29 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/17 10:16:36 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	if ((unsigned char *)dest > (unsigned char *)src)
	{
		while (size--)
			((unsigned char *)dest)[size] = ((unsigned char *)src)[size];
	}
	else
	{
		while (i < size)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
