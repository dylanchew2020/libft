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

# MANDATORY
SRC_DIR = ./
SRC = $(addprefix $(SRC_DIR)ft_, $(addsuffix .c, \
		isalpha isdigit isalnum isascii isprint toupper tolower \
		memset memcpy memmove memchr memcmp atoi bzero calloc\
		strlen strlcpy strlcat strncmp strchr strrchr strnstr strdup \
		substr strjoin strtrim split itoa strmapi striteri \
		putchar_fd putstr_fd putendl_fd putnbr_fd))
OBJ = $(SRC:%.c=%.o)

# BONUS
B_SRC = $(addprefix $(SRC_DIR)ft_, $(addsuffix .c, \
		lstnew lstadd_front lstsize lstlast lstadd_back lstdelone \
		lstclear lstiter lstmap))
B_OBJ = $(B_SRC:%.c=%.o)

# HEADER
INC = ./
HEAD = -I $(INC)

# COMPILER
#-L ../libft -l ft<-- make the lib file dir able to be accessed anywhere
CC = gcc
CFLAG = -Wall -Werror -Wextra $(HEAD)

# LIBRARY
LIBCR = ar -rcs

# REMOVE FILES
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBCR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c $< -o $@

bonus: $(B_OBJ)
	$(LIBCR) $(NAME) $(B_OBJ)
	
clean:
	$(RM) $(OBJ) ${B_OBJ}

fclean: clean
	$(RM) $(NAME) a.out libft.so

re: fclean all

norme:
	norminette -R CheckForbiddenSourceHeader $(SRC) $(B_SRC)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(B_SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(B_OBJ)

.PHONY: all clean fclean re norme
