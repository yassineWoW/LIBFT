/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:48:22 by yimizare          #+#    #+#             */
/*   Updated: 2023/12/07 12:01:13 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nbr;
	int		return_count;

	return_count = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		return_count += ft_putchar('-');
	}
	if (nbr <= 9)
		return_count += ft_putchar(nbr + '0');
	else
	{
		return_count += ft_putnbr((nbr / 10));
		return_count += ft_putchar((nbr % 10) + '0');
	}
	return (return_count);
}
