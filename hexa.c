/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:19:35 by kakorzar          #+#    #+#             */
/*   Updated: 2023/01/22 17:04:04 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned long long n)
{
	int	len;

	len = 0;
	if (!n)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_hexa(unsigned long long n, int x)
{
	if (n >= 16)
	{
		ft_hexa(n / 16, x);
		ft_hexa(n % 16, x);
	}
	else
	{
		if (n < 10)
			ft_putchar_i(n + '0');
		else
		{
			if (x)
				ft_putchar_i(n - 10 + 'a');
			else
				ft_putchar_i(n - 10 + 'A');
		}
	}
}

int	ft_puthex(unsigned int n, int x)
{
	int	len;

	len = 0;
	len += ft_hex_len(n);
	ft_hexa(n, x);
	return (len);
}

int	ft_putptr(unsigned long long pt)
{
	int	ret;

	ret = 0;
	ret += write(1, "0x", 2);
	ret += ft_hex_len(pt);
	ft_hexa(pt, 1);
	return (ret);
}
