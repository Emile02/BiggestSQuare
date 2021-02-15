##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile for printf
##

NAME 	=		bsq

SRC	=		src/main.c	\
			src/bsq.c	 \
			src/convert_file_in_tab.c

OBJ_S	=		$(SRC:.c=.o)

T_OBJ	=		$(T_SRC:.c=.o)

CFLAGS	+=		-g -Wall -Wextra -I./include

LDFLAGS +=		-lmy -L./lib/

LDFLAGS_T	+=	-lcriterion $(LDFLAGS)

GCC	=		gcc

all:			$(NAME)

$(NAME):lib	$(OBJ_S)
			$(CC) -o $(NAME) $(OBJ_S) $(LDFLAGS)

lib:
			make -C ./lib/my

clean:
			make -C ./lib/my clean
			rm -f $(OBJ_S)
			rm -f *~
			rm -f lib/libmy.a
			rm -f lib/my/libmy.a

fclean: clean
			make -C ./lib/my fclean
			rm -f $(NAME)
			rm -f unit_tests

re: fclean all

unit_tests: re $(T_OBJ)
			$(GCC) $(T_OBJ) -o unit_tests --coverage $(LDFLAGS_T)

run_tests: 		$(NAME) ./unit_tests

.PHONY: 		all clean lib fclean re unit_tests run_tests
