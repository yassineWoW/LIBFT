/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:34:39 by yimizare          #+#    #+#             */
/*   Updated: 2023/12/07 19:01:26 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	return_count;
	int	i;

	return_count = 0;
	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i] != '\0')
	{
		return_count += ft_putchar(s[i]);
		i++;
	}
	return (return_count);
}
