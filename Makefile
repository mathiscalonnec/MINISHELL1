##
## EPITECH PROJECT, 2018
## Makefile
## File description:
##
##

SRC_DIR		=	src

INCLUDE_DIR	=	include/

SRC		=	$(SRC_DIR)/main.c		\
			$(SRC_DIR)/my_putchar.c		\
			$(SRC_DIR)/my_putstr.c		\
			$(SRC_DIR)/exit.c		\
			$(SRC_DIR)/find_word.c		\
			$(SRC_DIR)/my_strcut.c		\
			$(SRC_DIR)/str_to_array_delim.c	\
			$(SRC_DIR)/my_strcat.c		\
			$(SRC_DIR)/my_exec.c		\
			$(SRC_DIR)/my_strlen.c		\
			$(SRC_DIR)/my_strdup.c		\
			$(SRC_DIR)/match_builtins.c	\
			$(SRC_DIR)/choose_fonction.c	\
			$(SRC_DIR)/builtins.c		\
			$(SRC_DIR)/init_struct.c	\
			$(SRC_DIR)/realloc.c

OBJ		=	$(SRC:.c=.o)

NAME		=	mysh

CFLAGS		=	-g -Wall -Wextra -I./$(INCLUDE_DIR)

all		:	$(NAME)


$(NAME)		:	$(OBJ)
			gcc -o $(NAME) $(OBJ) $(CFLAGS)
			rm -f $(OBJ)

clean		:
			rm -f $(OBJ)

fclean		:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean
