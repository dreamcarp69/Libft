/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:19:40 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/21 10:19:29 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	if (*needle == '\0')
		return ((char *)hay);
	if (!len || !*hay)
		return (NULL);
	i = 0;
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)hay);
	if (nlen > len)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp(hay + i, needle, nlen) == 0)
		{
			if (nlen + i > len)
				return (NULL);
			return ((char *)hay + i);
		}
		i++;
	}
	return (NULL);
}
