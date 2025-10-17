/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:56:23 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/17 13:28:07 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str,	const char *str2, size_t lenght)
{
	size_t	i;

	i = 0;
	if (lenght == 0)
		return (0);
	while (str[i] != '\0' && str[i] == str2[i]
		&& i != lenght - 1)
		i++;
	return (str[i] - str2[i]);
}
