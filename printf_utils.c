/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:18:53 by kakorzar          #+#    #+#             */
/*   Updated: 2023/01/23 08:43:56 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_i(int c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr_i(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		i = write(1, "(null)", 6);
	else
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (i);
}

int	print_unsigned(unsigned int n)
{
	char	*num;
	int		ret;

	ret = 0;
	num = 0;
	num = ft_uitoa(n);
	ret += ft_strlen(num);
	ft_putstr_i(num);
	free(num);
	return (ret);
}

int	print_number(int n)
{
	int		ret;
	char	*num;

	ret = 0;
	num = ft_itoa(n);
	ret += ft_numlen(n);
	if (n == -2147483648)
		ret = ft_putstr_i("-2147483648");
	else
	{
		if (n < 0)
			ret++;
		ft_putstr_i(num);
	}
	free(num);
	return (ret);
}
