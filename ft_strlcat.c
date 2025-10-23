/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:34:10 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/23 13:08:18 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	if (!size)
		return (ft_strlen(src));
	while (dest[len] != '\0' && len < size)
		len++;
	i = len;
	while (len + 1 < size && src[len - i] != '\0')
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < size)
		dest[len] = '\0';
	i = i + ft_strlen(src);
	return (i);
}
