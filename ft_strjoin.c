/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weeever <weeever@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:54:56 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/16 22:14:39 by weeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *result;

	i = 0;
	j = 0;
	result = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (!result)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[j] = s1[i];
		i++;
		j++; 
	}
	i = 0;
	while (s2[i] != '\0')
	{
		result[j] = s2[i];
		i++;
		j++; 	
	}
	result[j] = '\0';
	return (result);
}
