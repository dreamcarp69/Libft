/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:41:57 by kakorzar          #+#    #+#             */
/*   Updated: 2023/01/18 20:50:02 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	else
	{
		while (n != 0)
		{
			i++;
			n /= 10;
		}
	}
	return (i);
}

static char	*ft_fillstr(char *str, int len, int n)
{
	int	mod;
	int	i;

	i = 0;
	while (i < len)
	{
		mod = n % 10;
		n = n / 10;
		str[len - (i + 1)] = mod + '0';
		i++;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;

	len = ft_numlen(n);
	neg = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 10);
			len = 10;
		}
		n = n * -1;
		neg++;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	n = n * neg;
	str = ft_fillstr(str, len, n);
	return (str);
}
