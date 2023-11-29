/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:22:18 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/29 17:48:22 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

/*void *f(void *cont)
{
	return cont;
}
void del(void *cont)
{
	(void)cont;
}
void fun()
{
		t_list *ptr;
	ptr = ft_lstnew("ASD");

	ft_lstadd_back(&ptr, ft_lstnew("BBB"));
	ft_lstadd_back(&ptr, ft_lstnew("CCC"));

	t_list *str=ft_lstmap(ptr, f, del);
	ft_lstclear(&ptr, del);
	ft_lstclear(&str, del);
}*/

int	main(void)
{
	//--------------ft_isalpha-------------------
	//char c = '\200';
	//printf("%d\n", ft_isalpha(c));
	//-----------------------------------------------

	//---------------ft_isascii---------------------------
	//char c = '\127';
	//printf("%d\n", ft_isascii())	
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
	//char	*str = NULL;
	//char	deli = ' ';
	//char	**split = ft_split(str, deli);
	//int i = 0;
	//while (split[i] != NULL)
	//{
		//printf("%p\n", split);
		//i++;
	//}
	//if (!split)
		//free(split);
	//-------------------ft_itoi---------------------------
	//printf("%s\n", ft_itoi(1234));
	//--------------------ft_memset------------------------------------

		//int a[] = {0, 0};

		//ft_memset(&a, 49, 1);
		//printf("%c", (char)a);
	
		//ft_memset(&a, 51, 2);
		//printf("%c", (char)a);
	
		//ft_memset(&a, 51, 3);
		//printf("%c", (char)a);
	
		//ft_memset(&a, 55, 4);
		//printf("%c\n", (char)a);

	

		//int a[] = {0, 0};
		//ft_memset((char *)&a,69,7);
		//ft_memset((char *)&a,78,6);
		//ft_memset((char *)&a,73,5);
		//ft_memset((char *)&a,83,4);
		//ft_memset((char *)&a,83,3);
		//ft_memset((char *)&a,65,2);
		//ft_memset((char *)&a,89,1);

		//printf("%s",(char *)a);
	    //---------------------------------------------
		//char p[] = "hello";
		//char *a = p;
		//printf("%d\n", *(int *)a);
		//printf("%d", 'l');

	//-------------------------ft_bzero--------------------
	//char a[]="0123456789";
	//ft_bzero((int *)a + 2,2);
	//printf("%s\n",a);
	//---------------------putchar_fd-----------------------------------

	int a = open("a.txt",  O_CREAT | O_RDWR, 0700);
	ft_putchar_fd('a', a);
	printf("%d\n", a);
	close(a);
   //------------------------------------------------------------------
	//

	//---------------------------ft_memcpy----------------------
	
    //------------------------------------------------------------------
	/*int a = 0;
	ft_memset(&a,2,1); 
	printf("%c",(char )a); 
	ft_memset(&a,97,3); 
	printf("%c",(char )a); 
	ft_memset(&a,65,3);
	ft_memset(&a,65,3); 
	printf("%c",(char )a); 
	ft_memset(&a,65,3); 
	printf("%c",(char )a); 
	ft_memset(&a,65,3);
	int b = 0;
	ft_memset(&b, 1, 2);
	printf("%d\n", b);*/
    //-----------------------------------lstaddnew--------------------------
//fun();
//system("leaks a.out");
	return (0);
}


