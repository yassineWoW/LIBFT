/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:49:30 by yimizare          #+#    #+#             */
/*   Updated: 2023/12/07 16:54:03 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long i, char c)
{
	int		return_count;
	char	*base;

	return_count = 0;
	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (i < 16)
		return_count += ft_putchar(base[i % 16]);
	else
	{
		return_count += ft_puthexa(i / 16, c);
		return_count += ft_putchar(base[i % 16]);
	}
	return (return_count);
}
