/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:35:12 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/02 18:55:06 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*lastspot;

	lastspot = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			lastspot = s;
		s++;
	}
	if (c == '\0')
	{
		return (NULL);
	}
	return ((char *)lastspot);
}
