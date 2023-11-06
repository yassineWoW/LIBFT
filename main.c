/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:22:18 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/05 18:42:21 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	//printf("%s\n", ft_strrchr("teset", 't'));
	//printf("%s", strrchr("teset", 'e'));
	//printf("%d\n ", ft_strncmp("i", "iskawatcha",7));
	//printf("%d\n", strncmp("i", "iskawatcha",7));
	char s[25] = "madawa ira ghaya";

	printf("%zu \n", ft_strlcat(s, "dagh", 0));
	printf("%zu \n", strlcat(s, "dagh", 0));
	
	return (0);
}
