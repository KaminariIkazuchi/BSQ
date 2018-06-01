##
## EPITECH PROJECT, 2018
## B-PSU-110 - Minishell 1
## File description:
## Makefile for Minishell 1
##

BINARY_COLOR	=	\033[34;1m

NORMAL		=	\033[0;0m

IO_DIR		=	\033[0;33m

RM		=	rm -rf

CC		=	gcc

MAKE		=	make

CPPFLAGS	+=	-I ./include -Wall -Wextra -g

CFLAGS		+=

LDFLAGS		+=	-L ./lib/my -lmy

PROJECT_NAME	=	Biggest SQuare (BSQ)

PROJECT_OWNERS	=	Warren HYPOLITE

NAME		=	bsq

SRCFILES	=	error_management.c	\
			file.c			\
			map_to_int_array.c	\
			my_show_int_array.c	\
			inverted_minesweeper.c	\
			int_array_to_map.c	\
			main.c

SRCDIR		:=	./src

OBJDIR		:=	./obj

OUTDIR		:=	.

SRC		=	$(addprefix $(SRCDIR)/, $(SRCFILES))

OBJ		=	$(addprefix $(OBJDIR)/, $(SRCFILES:.c=.o))

OUT		=	$(OUTDIR)/$(NAME)

$(OBJDIR)/%.o:	$(SRCDIR)/%.c
		@printf "%b" "$(NORMAL)"
		$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

all:		libs $(NAME)

$(NAME):	$(OBJ)
		@printf "%b" "$(NORMAL)"
		$(CC) -o $(OUT) $(OBJ) $(LDFLAGS)
		@echo
		@echo -e "${BINARY_COLOR}#################################################"
		@echo "#						#"
		@echo "#	" "Compiling the binary >>>" $(NAME) "		#"
		@echo "#						#"
		@echo -e "#################################################"
		@echo
		@echo -e "\033[32;1m$(PROJECT_NAME) - $(PROJECT_OWNERS) \n\n\t COMPILATION SUCCEED \(^o^)/$(NORMAL)"
		@echo


libs:
		@printf "%b" "$(IO_DIR)"
		$(MAKE) -C lib/my

clean:

		$(RM) $(OBJ)
		@printf "%b" "$(IO_DIR)"
		$(MAKE) clean -C lib/my
		@printf "%b" "$(NORMAL)"

fclean:		clean
		$(RM) $(OUT)
		@printf "%b" "$(IO_DIR)"
		$(MAKE) fclean -C lib/my
		@printf "%b" "$(NORMAL)"

re:		fclean	all

.PHONY:		all clean fclean re
