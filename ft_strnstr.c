/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:23:51 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/16 12:17:31 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const	char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i + j < len)
	{
		while (to_find[j] != '\0' && str[i + j] == to_find[j] && i + j < len)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		j = 0;
		i++;
	}
	return (0);
}
