##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	get_next_line.c		\
		my_strlen.c		\
		my_putstr.c		\
		my_put_nbr.c		\
		my_getnbr.c		\
		rb_free.c		\
		display_map.c		\
		map.c			\
		my_pc.c			\
		remove.c		\
		player.c		\
		game.c			\
		check.c			\
		rb_realloc_str.c	\
		rb_strcpy.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-W -Wall -Werror -Wextra -L -I. -ggdb -g3

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f *# *~ $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
