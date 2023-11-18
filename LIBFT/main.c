/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:22:18 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/18 18:01:23 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{

	//-------------ft_strrchr-----------------------------
	//printf("%s\n", ft_strrchr("teset\n", 't'));
	//printf("%s", strrchr("teset", 'e'));
	//----------------------------------------------------

	//--------------ft_strncmp----------------------------
	//printf("%d\n ", ft_strncmp("i", "iskawatcha",7));
	//printf("%d\n", strncmp("i", "iskawatcha",7));
	//char s[25] = "madawa ira ghaya";
	//----------------------------------------------------

	//--------------ft_strlcat----------------------------
	//printf("%zu \n", ft_strlcat(s, "dagh", 0));
	//printf("%zu \n", strlcat(s, "dagh", 0));
	//----------------------------------------------------

    //-----------------ft_strnstr----------------------------
    //printf("%s \n", ft_strnstr("come again", "again", 10));
    //printf("%s \n", strnstr("come again", "again", 10));
	//----------------------------------------------------

	//------------------ft_memcmp---------------------------
	//printf("%d, memcmp()\n" , memcmp("aa\0ec", "aa\0dd", 5));
	//printf("%d, ft_memcmp()" , ft_memcmp("aa\0ec", "aa\0dd", 5));
	//return (0);
	//-------------------------------------------------------

	//-------------------ft_memmove---------------------------
	//printf("%d \n", INT_MAX);


	//-------------------ft_split---------------------------
	//printf(ft_split("    hello   main   ", ' '));
	int i = 0;

 char *s = "      split       this for   me  !       ";
    char **rs =ft_split(s,' ');

	while(rs[i] != NULL)
    	printf("%s\n",rs[i++]);

    return (0);
}
