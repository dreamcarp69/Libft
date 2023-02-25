/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:43:04 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/19 20:34:28 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*str_cpy;
	char	ch;

	str_cpy = (char *)str;
	ch = (char)c;
	while (n > 0)
	{
		if (*str_cpy == ch)
			return (str_cpy);
		else
		{
			str_cpy++;
			n--;
		}
	}
	return (0);
}
