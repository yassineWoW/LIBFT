/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:22:18 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/25 17:53:16 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 void *pt(void *cont)
 {
	void *ptr;

	ptr = (void *)ft_strdup((char *)cont);
	return (ptr);
 }
 void ft(void *co)
 {
	(void)co;
 }
int	main1(void)
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


	//-------------------ft_itoi---------------------------
	//printf("%s\n", ft_itoi(1234));
	//--------------------------------------------------------


	t_list	*list;
	

	list = ft_lstnew((void *)ft_strdup("ALAL"));
	ft_lstadd_back(&list, ft_lstnew((void *)ft_strdup("00000")));
	ft_lstadd_back(&list, ft_lstnew((void *)ft_strdup("111")));
	ft_lstadd_back(&list, ft_lstnew((void *)ft_strdup("0001100")));
t_list *ptr = ft_lstmap(list,NULL, free);
	ft_lstclear(&list, free);
	ft_lstclear(&ptr, free);
    return (0);
}

int main()
{
	main1();

	
//system("leaks a.out");
}