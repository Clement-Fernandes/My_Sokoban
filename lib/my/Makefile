##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Task01
##

SRC	=	my_printf.c		\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c		\
		my_flag_u.c		\
		my_flag_o.c		\
		my_flag_b.c		\
		my_flag_x_min.c	\
		my_flag_x_maj.c	\
		flags_print.c	\
		call.c			\
		my_flag_s_maj.c	\
		space_flag.c	\
		porcent_flag.c	\
		my_strcpy.c		\
		my_strdup.c		\
		my_strlen.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

libmy:		$(OBJ)
	ar  rc libmy.a *.o
	cp libmy.a ../libmy.a

includemy:
	cp libmy.a ../../include/sokoban.h

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)
