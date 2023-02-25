/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:17:26 by kakorzar          #+#    #+#             */
/*   Updated: 2023/01/20 21:23:49 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_ulen(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_fillstr(char *str, int len, size_t n)
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

	neg = 0;
	len = ft_numlen(n);
	if (n < 0)
	{
		n = n * -1;
		neg++;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str = ft_fillstr(str, len, n);
	if (neg == 1)
		str[0] = '-';
	return (str);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_ulen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str = ft_fillstr(str, len, n);
	return (str);
}
