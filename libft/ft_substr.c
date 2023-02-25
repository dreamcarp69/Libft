/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:30:26 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/19 20:32:52 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	j = (ft_strlen(s + start) + 1);
	if (j < len)
		len = j;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len && start <= ft_strlen(s))
	{
		str[i] = (s[start + i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
