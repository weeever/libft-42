/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:34:10 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/22 13:20:56 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sizes;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	if (size <= strlen(dest) )
		j = strlen(dest) + strlen((char *)src);
	else
		j = size + strlen((char *)src);
	if (size == 0)
		return (j);
	sizes = strlen(dest);
	while (i + sizes < size - 1 && src[i] != '\0')
	{
		dest[sizes + i] = src[i];
		i++;
	}
	dest[i + sizes] = '\0';
	return (j);
}
