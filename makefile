SRCS = ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c /
       ft_isalnum.c ft_strlen.c ft_toupper.c ft_tolower.c /
	   ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcat.c /
	   ft_strlcpy.c

CFLAGS = -Wall -Werror -Wextra
CC = gcc
OBJS = ${SRCS:.c=.o}
LIBNAME = libft.a
RM = rm -f
LIBCO = ar rcs

.c.o:
		${CC} {CLFAGS} -c $< -o ${<:.c=.o} 

${LIBNAME}: ${OBJS}
			${LIBCO} ${LIBNAME} ${OBJS}

all: ${LIBNAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${LIBNAME} ${OBJS}

re: fclean all

.PHONY:all re clean fclean