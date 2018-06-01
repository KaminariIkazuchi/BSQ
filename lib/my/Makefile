##
## EPITECH PROJECT, 2018
## B-PSU-110 - Minishell 1
## File description:
## Makefile for Minishell 1
##

LIB_COLOR	=	\033[36;1m

WHITE		=	\033[0;0m

IO_DIR		=	\033[0;33m

RM		=	rm -rf

CC		=	gcc

AR		=	ar rc

MAKE		=	make

CPPFLAGS	+=	-I ./include

CFLAGS		+=	-Wall -Wextra #-Werror -g3

LDFLAGS		+=

NAME		=	libmy.a


SRCFILES	=	my_putchar.c		\
			my_strdup.c		\
			my_strncmp.c		\
			my_put_nbr.c		\
			my_strlen.c		\
			my_strcat.c		\
			epur_str.c		\
			my_str_to_word_array.c	\
			my_putstr.c

SRCDIR		:=	./src

OBJDIR		:=	./obj

OUTDIR		:=	.

SRC		=	$(addprefix $(SRCDIR)/, $(SRCFILES))

OBJ		=	$(addprefix $(OBJDIR)/, $(SRCFILES:.c=.o))

OUT		=	$(OUTDIR)/$(NAME)

$(OBJDIR)/%.o:	$(SRCDIR)/%.c
		@printf "%b" "$(WHITE)"
		$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

all:		$(NAME)

$(NAME):	$(OBJ)
		@printf "%b" "$(WHITE)"
		$(AR) -o $(OUT) $(OBJ)
		@echo
		@echo -e "${LIB_COLOR}#################################################"
		@echo "#						#"
		@echo "#	""Compiling the library >>>" $(NAME) "	#"
		@echo "#						#"
		@echo -e "#################################################${WHITE}"
		@echo
		@printf "%b" "$(IO_DIR)"

clean:
		@printf "%b" "$(WHITE)"
		$(RM) $(OBJ)
		@printf "%b" "$(IO_DIR)"

fclean:		clean
		@printf "%b" "$(WHITE)"
		$(RM) $(OUT)
		@printf "%b" "$(IO_DIR)"

re:		fclean	all

.PHONY:		all clean fclean re
