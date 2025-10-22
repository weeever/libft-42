/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weeever <weeever@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:03:18 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/22 21:48:24 by weeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_super_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_count_word(char const *s, char c)
{
	int	len;
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len = ft_super_len(((char *)s + i), c);
		if (len != 0)
		{
			count++;
			i += len;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_malloc(char **result, char const *s, char c)
{
	int	len;
	int	i;
	int	index;

	index = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len = ft_super_len(((char *)s + i), c);
		if (len != 0)
		{
			result[index] = malloc(sizeof(char) * (len + 1));
			if (result[index] == NULL)
				return (index);
			index++;
			i += len;
		}
		else
			i++;
	}
	return (-1);
}

static char	**ft_write(char const *s, char c, char **result)
{
	int	i;
	int	len;
	int	index;
	int	j;

	j = 0;
	i = 0;
	index = 0;
	while (s[i] != '\0')
	{
		len = ft_super_len(((char *)s + i), c);
		if (len != 0)
		{
			j = 0;
			while (len-- != 0)
				result[index][j++] = s[i++];
			result[index++][j] = '\0';
		}
		else
			i++;
	}
	result[index] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		j;

	if (s == NULL)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!result)
		return (NULL);
	j = ft_malloc(result, s, c);
	if (j != -1)
	{
		while (j > 0)
		{
			j--;
			free(result[j]);
		}
		free(result);
		return (NULL);
	}
	result = ft_write(s, c, result);
	return (result);
}
