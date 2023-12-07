/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:13:27 by yimizare          #+#    #+#             */
/*   Updated: 2023/12/07 16:57:24 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	getfspec(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (format == 'c')
		count += ft_putchar((char)va_arg(ap, int));
	else if (format == 'u')
		count += ft_putunsignedi(va_arg(ap, unsigned int));
	else if (format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format == 'x')
		count += ft_puthexa(va_arg(ap, unsigned int), 'x');
	else if (format == 'X')
		count += ft_puthexa(va_arg(ap, unsigned int), 'X');
	else if (format == 'p')
	{
		count += ft_putstr("0x");
		count += ft_puthexa((unsigned long)va_arg(ap, void *), 'x');
	}
	else
		count += ft_putchar(format);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format += 1;
			count += getfspec(*format, ap);
		}
		else if (*format != '%')
			count += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
}
