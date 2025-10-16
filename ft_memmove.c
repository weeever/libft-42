/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:29:29 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/16 17:46:51 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;
	size_t 	size_src;
	size_t	size_dest;

	i = 0;
	size_src = 0;
	size_dest = 0;
	size_src = strlen((char *)&src);
	size_dest = strlen((char *)&dest);

	if (!dest && !src)
		return (NULL);
	if (size_dest > size_src)
	{
		while(size_src != size_dest)
		{
			size_src++;
			i++;
		}
		while (size--)
		{
			((char *)src)[i] = ((char *)dest)[i];
			i++;
		}
		return((void *)src);
	}
	while (size--)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char src[] = "test-les-coupains";
	char src2[] = "test-les-coupains";

	memmove(src + 2, src, 5);
	ft_memmove(src2 + 2, src2, 5);
	printf("%s\n", src);
	printf("%s", src2);

	
}