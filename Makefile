##
## EPITECH PROJECT, 2017
## B-MUL-100 - My Hunter
## File description:
## Makefile for my_hunter
##

RM	=	rm -rf

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	bsq

SRC	=	bsq.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -L./lib/my -lmy -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean  all

.PHONY:		all clean fclean re
