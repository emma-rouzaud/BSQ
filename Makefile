##
## EPITECH PROJECT, 2017
## CSFML - Makefile
## File description:
## generic CSFML Makefile
##

SRC1	=	./src/bsq.c		\
		./src/my_getnbr.c	\
		./src/main.c		\
		./src/check_tab.c	\
		./src/my_strlen.c	\
		./src/print.c

OBJ1	=	$(SRC1:.c=.o)

SRC2	=	./tests/test.c		\
		./tests/test2.c		\
		./src/bsq.c		\
		./src/my_getnbr.c	\
		./src/check_tab.c	\
		./src/my_strlen.c	\
		./src/print.c

OBJ2	=	$(SRC2:.c=.o)

NAME	=	bsq

CFLAGS	=	-W -Wall -Wextra

all:		$(NAME) clean

$(NAME):	$(OBJ1)
		gcc -o $(NAME) $(OBJ1) $(CFLAGS)

tests_run:	$(OBJ2)
		gcc -o units $(OBJ2) -lcriterion -coverage $(CFLAGS)
		rm -f $(OBJ2)
		./units

clean:
		rm -f $(OBJ1)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
