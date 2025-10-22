/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weeever <weeever@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:56:23 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/22 21:50:22 by weeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find)
{
	size_t		i;
	char		*result;
	char		cast;

	cast = (char)to_find;
	result = (char *)str;
	i = 0;
	while (result[i] != '\0')
	{
		if (result[i] == cast && cast != 0)
			return (result + i);
		i++;
	}
	if (cast == 0)
		return (result + i);
	return (NULL);
}
