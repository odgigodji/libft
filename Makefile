SRCS	= ft_*.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc
ARRC	= ar rc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -c

all:		${NAME}

${NAME}:	${OBJS}
			${ARRC} ${NAME} ${OBJS}

.c.o: ${SRCS} 
			${CC} ${CFLAGS} ${SRCS}
			
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re libft.a
