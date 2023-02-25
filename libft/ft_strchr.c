/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:28:58 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/16 19:52:38 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*st;
	char	ch;

	st = (char *)s;
	ch = (char)c;
	while (*st != '\0')
	{
		if (*st == ch)
			return (st);
		else
			st++;
	}
	if (ch == '\0')
		return (st++);
	return (0);
}
