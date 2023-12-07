/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:24:45 by yimizare          #+#    #+#             */
/*   Updated: 2023/12/07 11:58:48 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_putnbr(int i);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_puthexa(unsigned long n, char c);
int		ft_putunsignedi(unsigned int i);

#endif
