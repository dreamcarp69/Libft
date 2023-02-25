/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:37:47 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/19 20:34:18 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*res;
	unsigned char	*source;

	if (!dst && !src)
		return (0);
	i = 0;
	res = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (len > i)
	{
		if (res > source)
		{
			len--;
			res[len] = source[len];
		}
		else
		{
			res[i] = source[i];
			i++;
		}
	}
	return (dst);
}
