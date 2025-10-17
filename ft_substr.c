/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:09:16 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/17 10:54:51 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	size_t	switcher;
	char	*result;

	i = 0;
	if (ft_strlen((char *)s) <= start)
	{
		result = malloc(sizeof(char));
		result[i] = '\0';
		return (result);
	}
	size = ft_strlen((char *)s + start);
	if (size <= len)
		switcher = size;
	else
		switcher = len;
	result = malloc(sizeof(char) * switcher + 1);
	if (!result)
		return (NULL);
	while (i != switcher)
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}
