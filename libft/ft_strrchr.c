/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:31:42 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/21 10:19:16 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*st;

	i = 0;
	st = (unsigned char *)s;
	while (st[i] != '\0')
		i++;
	if (i <= 0 && c == '\0')
		return ((char *)st);
	if (i > 0)
	{
		st = st + i;
		while (i >= 0)
		{
			if (*st == (unsigned char)c)
				return ((char *)st);
			else
				st--;
			i--;
		}
	}
	return (NULL);
}
