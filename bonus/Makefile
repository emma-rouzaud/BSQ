##
## EPITECH PROJECT, 2017
## CSFML - Makefile
## File description:
## generic CSFML Makefile
##

SRC	=	./bsq.c		\
		./my_getnbr.c	\
		./main.c		\
		./check_tab.c	\
		./my_strlen.c	\
		./print.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bonus_bsq

CFLAGS	=	-W -Wall -Wextra

all:		$(NAME) clean

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
