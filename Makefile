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
INC = ./
SRC_DIR = ./
SRC = ${SRC_DIR}${wildcard *.c}
OBJ = $(SRC:%.c=%.o)

LIBCR = ar -rcs
HEAD = -I ${INC}
CFLAG = -Wall -Werror -Wextra $(LIB)
CC = gcc

all: ${OBJ}
	${LIBCR} ${NAME} ${OBJ}
%.o: %.c
	${CC} -c $< -o $@ -I $(INC)
	
#-L ../libft -l ft<-- make the lib file dir able to be accessed anywhere

clean :
	rm -f ${OBJ} *.out

fclean : clean
	rm -f ${NAME}

re : fclean all

norme : 
	norminette -R CheckForbiddenSourceHeader ${SRC}