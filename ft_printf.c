/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:16:05 by kakorzar          #+#    #+#             */
/*   Updated: 2023/01/20 20:28:01 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(const char c, va_list args)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_putchar_i(va_arg(args, int));
	if (c == 's')
		ret += ft_putstr_i(va_arg(args, char *));
	if (c == 'p')
		ret += ft_putptr(va_arg(args, unsigned long long));
	if (c == 'd' || c == 'i')
		ret += print_number(va_arg(args, int));
	if (c == 'u')
		ret += print_unsigned(va_arg(args, unsigned int));
	if (c == 'x')
		ret += ft_puthex(va_arg(args, unsigned long long), 1);
	if (c == 'X')
		ret += ft_puthex(va_arg(args, unsigned long long), 0);
	if (c == '%')
		ret += ft_putchar_i('%');
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;
	int		i;

	ret = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ret += ft_convert(format[i], args);
		}
		else
			ret += ft_putchar_i(format[i]);
		i++;
	}
	va_end(args);
	return (ret);
}
