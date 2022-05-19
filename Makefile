# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchew <lchew@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 17:13:24 by lchew             #+#    #+#              #
#    Updated: 2022/05/14 22:01:24 by lchew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INC = ./includes
SRC_DIR = ./srcs/
SRC = ${SRC_DIR}ft_putchar.c ${SRC_DIR}ft_swap.c \
		${SRC_DIR}ft_putstr.c ${SRC_DIR}ft_strlen.c \
		${SRC_DIR}ft_strcmp.c
OBJ = $(SRC:%.c=%.o)

LIBCR = ar -rcs

CC = gcc -Wall -Werror -Wextra

all: ${OBJ}
	${LIBCR} ${NAME} ${OBJ}
%.o: %.c
	${CC} -c $< -o $@ -I $(INC)

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all