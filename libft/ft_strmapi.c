/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:34:58 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/21 10:15:11 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	char		*s1;
	int			i;

	i = 0;
	s1 = (char *)s;
	if (s == NULL || f == NULL)
		return (0);
	str = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = (*f)(i, s1[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
