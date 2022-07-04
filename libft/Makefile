# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 09:36:53 by nchoo             #+#    #+#              #
#    Updated: 2022/07/04 20:03:05 by nchoo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER		=	libft.h
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -std=c99
OBJS		=	$(SRCS:.c=.o)
NAME		=	libft.a
SRCS		=	ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_memcpy.c ft_bzero.c ft_strlen.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c
AR			=	ar
ARFLAGS		=	rc
RM			=	rm -f

all : 		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c -I$(HEADER) $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
