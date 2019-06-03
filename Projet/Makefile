##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Thierry Msumbuko
##

CC	=	gcc -g

SRC	=	$(wildcard lib/my/*.c)

SRC2	=	$(wildcard *.c)

NAME	=	Projet

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):        $(OBJ)
	ar rc libmy.a $(OBJ)
	make clean
	gcc -o $(NAME) $(SRC2) -L. -lmy -lncurses


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
