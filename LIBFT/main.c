/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:22:18 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/30 15:59:32 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

    //void *f(void *cont)
    //{
    //     *(char *)cont -= 32;
    //        return cont;
    //}

    //void del(void *cont)
    //{
    //    cont = NULL;
    //}

    //void fun()
    //{
    //    char a[] = "hello";
    //    char b[] = "world";

    //    t_list *list;
    //    t_list *mapped;

    //    list = ft_lstnew(&a);
    
    //    ft_lstadd_back(&list, ft_lstnew(&b));
    //    mapped = ft_lstmap(list, f, del);

    //    while (mapped)
    //    {
    //        printf("%s\n", (char *)mapped->content);
    //        mapped = mapped->next;
    //    }

    //}
    
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

    //-------------------ft_strtrim-------------------------
        //char *s1 = "  i iskawa tcha i  ";

        //printf("%s\n", ft_strtrim(s1, "  "));
        //printf("%zu\n", ft_strlen(ft_strtrim(s1, "  ")));
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
	//printf("%s\n", ft_itoa(INT_MIN));
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

	//int a = open("a.txt",  O_CREAT | O_RDWR, 0700);
	//ft_putchar_fd('a', a);
	//printf("%d\n", a);
	//close(a);
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
void *ptr = ft_calloc(4000000000, 4611);
(void)ptr;

    //fun();


return (0);
}


