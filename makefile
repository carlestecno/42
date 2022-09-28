SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_memmove.c ft_atoi.c ft_tolower.c ft_toupper.c ft_strrchr.c ft_memcpy.c ft_strlcpy.c
OBJS = ${addprefix .,${SRCS:.c=.o}}
HEADER = libft.h

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.%.o : %.c
		${CC} ${CFLAGS} -I ./ -c $< -o $@

all : ${NAME}

${NAME} : ${OBJS} ${HEADER}
		ar rcs ${NAME} ${OBJS}
		ranlib ${NAME}

bonus : ${OBJS} ${OBJSBONUS} ${HEADER}
		ar rcs ${NAME} ${OBJS} ${OBJSBONUS}
		ranlib ${NAME}
		@touch $@

clean :
		${RM} ${OBJS} ${OBJSBONUS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re


