/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:42:34 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/29 11:18:38 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloccee;

	if (size < 0)
		return (NULL);
	alloccee = (void *)malloc(count * size);
	if (alloccee == NULL)
		return (NULL);
	ft_bzero(alloccee, (count * size));
	return (alloccee);
}
