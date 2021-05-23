# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namerei <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/19 20:47:33 by namerei           #+#    #+#              #
#    Updated: 2020/11/23 14:46:02 by namerei          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c 		\
ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c 			\
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strdup.c ft_calloc.c 			\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c 			\
ft_putendl_fd.c ft_putnbr_fd.c ft_isspace.c ft_strrev.c

BNS		= 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c				\
#			ft_lstclear.c ft_lstiter.c ft_lstmap.c

F_NONE		= \033[37m
F_ORANGE	= \033[38m
F_GREEN		= \033[32m

NAME		= libft.a

OBJS		= ${SRCS:.c=.o}

BNSOBJS		= ${BNS:.c=.o}

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar -rc ${NAME} ${OBJS}
			@echo "$(F_GREEN)Done! $(F_NONE)"

bonus:		${BNSOBJS}
			ar -rc ${NAME} ${BNSOBJS}

all:		${NAME}

clean:	
			${RM} ${OBJS} $(BNSOBJS)
			@echo "$(F_GREEN)Cleaned! $(F_NONE)"

fclean:		clean
			${RM} ${NAME} $(BNSOBJS)

re:			fclean all

.PHONY:		all clean fclean re
