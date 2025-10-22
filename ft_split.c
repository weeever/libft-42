/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:03:18 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/22 12:57:04 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_super_len(char const *s, char c)
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

int	ft_count_word(char const *s, char c)
{
	int	len;
	int	i;
	int	count;

	count = 0;
	i = 0;
	len = 0;
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

void	ft_free(int count, char **result)
{
	count = count - 1;
	while (count != 0)
	{
		free(result[count]);
		count--;
	}
	free(result);
}

int	ft_malloc(char **result, char const *s, char c)
{
	int	len;
	int	i;
	int	count;

	count = 0;
	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len = ft_super_len(((char *)s + i), c);
		if (len != 0)
		{
			result[count] = malloc(sizeof(char) * (len + 1));
			if (!result[count])
				return (count);
			count++;
			i += len;
		}
		else
			i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		index;
	int		len;
	int		j;
	char	**result;

	if (s == NULL)
		return (NULL);
	index = 0;
	i = 0;
	result = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!result)
		return (NULL);
	j = ft_malloc(result, s, c);
	if (j != 0)
		return (NULL);
	while (s[i] != '\0')
	{
		len = ft_super_len((s + i), c);
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
