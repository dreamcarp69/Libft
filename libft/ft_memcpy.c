/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:30:25 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/19 20:34:21 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	if (!dst && !src)
		return (0);
	ds = (char *)dst;
	sr = (char *)src;
	i = 0;
	while (n > i)
	{
		ds[i] = sr[i];
		i++;
	}
	return (ds);
}
