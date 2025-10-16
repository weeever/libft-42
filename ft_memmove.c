/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weeever <weeever@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:29:29 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/16 22:14:40 by weeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
    size_t	i;
    
    i = 0;
    if (!dest && !src)
        return (NULL);
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
