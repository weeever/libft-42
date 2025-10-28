/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weeever <weeever@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:19:50 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/28 12:09:15 by weeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if ((s1[i] == set[j]))
			{
				count ++;
				i++;
				j = -1;
			}
			j++;
		}
		return (count);
	}
	return (count);
}

static int	ft_reverse_counter(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (i != 0)
	{
		while (set[j] != '\0')
		{
			if ((s1[i] == set[j]))
			{
				if (i == 0)
					return (i);
				i--;
				j = -1;
			}
			j++;
		}
		return (i);
	}
	return (i);
}

static size_t	ft_malloc(size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start++ <= end)
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0')
	{
		result = malloc(sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	start = ft_counter(s1, set);
	end = ft_reverse_counter(s1, set);
	result = malloc(sizeof(char) * ft_malloc(start, end) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (start <= end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
