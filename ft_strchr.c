/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:56:23 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/16 12:17:04 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find)
{
	size_t		i;
	char		*result;

	result = (char *)str;
	i = 0;
	if (!(to_find >= 0 && to_find <= 127))
		return (result + i);
	while (result[i] != '\0')
	{
		if (result[i] == to_find && to_find != 0)
			return (result + i);
		i++;
	}
	if (to_find == 0)
		return (result + i);
	return (0);
}
