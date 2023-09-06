##
## EPITECH PROJECT, 2023
## B-CPE-210-LYN-2-1-stumper1-tristan.calard
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/error.c \
		src/gameoflife.c \
		src/count_neighbor.c \
		src/my_str_to_word_array.c \
		src/creat_copy.c

OBJ	=	$(SRC:.c=.o)

NAME	=	gameoflife

CFLAG	=	-Wextra -Wall

all:	$(NAME)

$(NAME):    $(OBJ)
			gcc -o $(NAME) $(OBJ) $(CFLAG) -g3 -I./include

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:	fclean all
