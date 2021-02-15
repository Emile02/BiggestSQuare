##
## EPITECH PROJECT, 2020
## Day10
## File description:
## day10
##

SRC		=	$(wildcard *.c)

OBJ 	=	$(SRC:.c=.o)

NAME 	=	libmy.a

CFLAGS	=	-Wall -Wextra -I./

LDFLAGS = 	-lmy -L./lib/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	mkdir -p ../../include

$(NAME):	$(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
