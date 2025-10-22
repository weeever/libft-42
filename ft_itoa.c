/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 09:38:09 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/22 11:16:40 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc(int n, char *res, int *i)
{
	int	tmp;

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

static char	*ft_write(int i, int n, char *res)
{
	int	sign;

	sign = 0;
	if (n < 0)
	{
		n = (n * -1);
		sign = 1;
	}
	while (i != 0)
	{
		if (n >= 10)
		{
			res[i - 1] = (n % 10) + '0';
			n = (n / 10);
		}
		else
			res[i - 1] = (n + 48);
		i--;
	}
	if (sign != 0)
		res[i] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	char	*tmp;

	i = 0;
	if (n == 0)
	{
		res = ft_strdup("0");
		return (res);
	}
	else if (n == -2147483648)
	{
		tmp = "-2147483648";
		res = ft_strdup(tmp);
		return (res);
	}
	res = 0;
	res = ft_malloc(n, res, &i);
	if (res == NULL)
		return (NULL);
	ft_write(i, n, res);
	res[i] = '\0';
	return (res);
}
