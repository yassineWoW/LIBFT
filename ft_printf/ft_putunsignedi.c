/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:18:27 by yimizare          #+#    #+#             */
/*   Updated: 2023/12/07 12:40:14 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignedi(unsigned int i)
{
	int	return_count;

	return_count = 0;
	if (i >= 10)
	{
		return_count += ft_putunsignedi(i / 10);
		return_count += ft_putchar((i % 10) + '0');
	}
	if (i <= 9)
		return_count += ft_putchar(i + '0');
	return (return_count);
}
