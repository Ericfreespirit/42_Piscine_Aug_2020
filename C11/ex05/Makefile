# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eriling <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 11:03:43 by eriling           #+#    #+#              #
#    Updated: 2020/08/24 14:07:22 by eriling          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ./srcs/*.c}
OBJS	= ${SRCS:.c=.o}
INCL	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= do-op

.c.o :	
			${CC} -I ${INCL} ${CFLAGS} -c $< -o ${<:.c=.o}
all :		${OBJS}
			${CC} -o ${NAME} ${OBJS}
clean :
			rm -f ${OBJS}
fclean :	clean
			rm -f ${NAME}
re :		fclean all
