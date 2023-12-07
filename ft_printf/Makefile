SRCS =	ft_printf.c	ft_putchar.c	ft_puthexa.c	ft_putnbr.c	ft_putunsignedi.c	ft_putstr.c 

NAME = libftprintf.a
CC = CC
CFLAGS = -Wall -Wextra -Werror
LIBC = ar r
RM = rm -f

SRCS_O =	${SRCS:.c=.o}

all :	${NAME}

${NAME}  : ${SRCS_O}
		${LIBC}	${NAME}	$?

clean : 
		${RM} ${SRCS_O}

fclean : clean
		${RM}	${NAME}

git :
	git add .; git commit -m "push"; git push;
re :	fclean all