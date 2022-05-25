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
CFLAG = -Wall -Werror -Wextra ${HEAD}
CC = gcc
RM = rm -f

all: ${NAME}

${NAME}: ${OBJ}
	${LIBCR} ${NAME} ${OBJ}

%.o: %.c
	${CC} -c $< -o $@

#-L ../libft -l ft<-- make the lib file dir able to be accessed anywhere

clean :
	${RM} ${OBJ} a.out libft.so

fclean : clean
	${RM} ${NAME}

re : fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

norme :
	norminette -R CheckForbiddenSourceHeader ${SRC}

.PHONY: all clean fclean re so norme
