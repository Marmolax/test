##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

SRC	=	src/main.c

LSRC =	src/lsrc/my_put_nbr.c \
		src/lsrc/my_putstr.c \
		src/lsrc/my_putchar.c \
		src/lsrc/my_printf.c \
		src/lsrc/my_getnbr.c \
		src/lsrc/my_strcmp.c \

OBJ	= $(SRC:.c=.o)

LOBJ = $(LSRC:.c=.o)

NAME =	test

WAR	=	-W -Wall -Wextra

CFLAGS =	$(WAR)

all:	$(NAME)

$(NAME):	$(OBJ) $(LOBJ)
	@gcc $(OBJ) $(LOBJ) -o $(NAME)
	@echo -e "\033[01m\033[32mCompilation done => ${NAME}\033[00m"

clean:
	rm -f $(OBJ) $(LOBJ)

fclean: clean
	rm -f $(NAME)
	find -name "*~" -print -delete && find -name "#*#" -print -delete

re:	fclean all

.PHONY: clean fclean re all
