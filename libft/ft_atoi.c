/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:27:19 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/19 20:34:52 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0' && (str[i] == '\f' || str[i] == '\n' || str[i] == ' '
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (str[i - 1] == '-')
			sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		res = (res * 10) + (str[i++] - '0');
	return (res * sign);
}
