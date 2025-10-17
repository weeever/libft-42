/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:03:18 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/17 13:29:29 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_super_len(char const *s, char c)
{
	int i;
		
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return(i);
		i++;
	}
	return (i);
}
int	ft_count_word(char const *s, char c)
{
	int len;
	int i;
	int count;

	count = 0;
	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len = ft_super_len(s, c);
		if (len != 0)
		{
			count++;
			i += len;
		}
		i++;
	}
	return (count);
}
int	ft_malloc(char **result ,char const *s, char c)
{
	int len;
	int i;
	int count;

	count = 0;
	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len = ft_super_len(s, c);
		if (len != 0)
		{
			
			i += len;
		}
		i++;
	}
}
char **ft_split(char const *s, char c)
{
	int i;
	char **result;
	int count;

	count = ft_count_word(s, c);
	i = 0;

	*result = malloc(sizeof(char *) * count); 
	
	while ()
	
}