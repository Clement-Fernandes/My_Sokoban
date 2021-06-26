##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

SRC	=	src/main.c					\
		src/open_read.c				\
		src/open_map_2d.c			\
		src/game.c					\
		src/help.c					\
		src/count_map.c				\
		src/find_p_and_o.c			\
		src/move_keys.c				\
		src/structs.c				\
		src/victory_and_defeat.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include/

LDFLAGS	=	-L./lib/my -lmy

NAME	=	my_sokoban

all:	 $(NAME)

$(NAME):	$(OBJ)
	make -sC lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) -lncurses -Wall -Wextra
	@tput setaf 5; cat include/signature; tput sgr0

clean:
	rm -f $(OBJ)
	make clean -sC lib/my

fclean:	clean
	make -sC lib/my/ clean
	rm -f $(NAME)
	rm -f libmy.a
	make fclean -sC lib/my
	clear

re:	fclean all

.PHONY: clean fclean re all
