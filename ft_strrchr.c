/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:56:23 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/16 12:18:45 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	size_t	i;
	char	*result;

	result = (char *)str;
	i = 0;
	if (!(to_find >= 0 && to_find <= 127))
		return (result + i);
	while (result[i] != '\0')
		i++;
	while (i != 0 && result[i] != to_find)
		i--;
	if (i == 0 && result[i] != to_find)
		return (NULL);
	return (result + i);
}
