/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:06:08 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/07 19:05:28 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t Ndstsize)
{
	size_t	i;
	size_t	sl;
	size_t	dl;

	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (dst == NULL || sl > Ndstsize - 1)
		return (sl);
	if (Ndstsize <= dl)
		return (Ndstsize + sl);
	i = 0;
	while (src[i] != '\0' && dl + 1 < Ndstsize)
	{
		dst[dl] = src[i];
		dl++;
		i++;
	}
	dst[dl] = '\0';
	return (sl + dl);
}
