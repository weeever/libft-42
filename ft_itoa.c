/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:15:18 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/18 12:21:52 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_malloc(int n, char *res, int *i)
{
	int tmp;

	if (n == 0)
	{
		(*i) = 2;
		res = malloc(sizeof(char) * 2);
		return (res);
	}
	if (n < 0)
	{
		tmp = (n * -1);
		(*i)++;
	}
	else
		tmp = n;
	while (tmp != 0)
	{
		tmp = (tmp / 10);
		(*i)++;
	}
	res = malloc(sizeof(char) * ((*i) + 1));
	return (res);
}

char	*ft_itoa(int n)
{
	int i;
	char *res;
	int j;

	i = 0;
	res = ft_malloc(n, res, &i);
	j = i;
	i = i - 1;
	if (n < 0)
	{
		n = (n * -1);
		res[j] = '-';
		j++;
	}
	while (i != 0)
	{
		if (n >= 10)
		{
			res[i--] = ((n % 10) + 48);
			n = (n / 10);
		}
		else
		{
			res[i--] = (n + 48);
			n = 0;
		}
	}
	res[j] = '\0';
	return (res);
}
#include <stdio.h>
int	main(void)
{
	char *res;
	
	res = ft_itoa(124);
	printf("%s", res);
    
}
