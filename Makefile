# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namerei <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 14:06:14 by namerei           #+#    #+#              #
#    Updated: 2020/11/08 14:06:18 by namerei          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra -c -I ./

SOURCE = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c 

SOURCE_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJECTS = $(SOURCE:.c=.o)
OBJECTS_BONUS = $(SOURCE_BONUS:.c=.o)
all: $(NAME) 

%.o: %.c
		$(CC) $(FLAGS) $<

$(NAME):
		$(CC) $(FLAGS) $(SOURCE)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
		rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
		 rm -f $(NAME)

re:fclean all

bonus: $(NAME)
		$(CC) $(FLAGS) $(SOURCE_BONUS) $(SOURCE) 
		ar rc $(NAME) $(OBJECTS) $(OBJECTS_BONUS)
		ranlib $(NAME)

.PHONY: clean fclean all re bonus
