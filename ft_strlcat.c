/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:34:10 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/16 09:36:34 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(char *dest)
{
	size_t	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sizes;
	size_t	i;
	size_t	j;

	i = 0;
	if (count(dest) < size)
		j = count(dest) + count((char *)src);
	else
		j = size + count((char *)src);
	sizes = count(dest);
	if (size == 0)
		return (j);
	while (i + sizes < size - 1 && src[i] != '\0')
	{
		dest[sizes + i] = src[i];
		i++;
	}
	dest[i + sizes] = '\0';
	return (j);
}
