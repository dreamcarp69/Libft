/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:46:30 by kakorzar          #+#    #+#             */
/*   Updated: 2023/01/22 16:25:02 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
int		ft_numlen(int n);
int		ft_ulen(unsigned int n);
size_t	ft_strlen(const char *s);
int		ft_putchar_i(int c);

int		ft_putstr_i(char *str);
int		print_number(int n);
int		print_unsigned(unsigned int n);

void	ft_hexa(unsigned long long n, int x);
int		ft_putptr(unsigned long long pt);
int		ft_puthex(unsigned int n, int x);
int		ft_hex_len(unsigned long long n);

int		ft_convert(const char c, va_list args);
int		ft_printf(const char *format, ...);

#endif
