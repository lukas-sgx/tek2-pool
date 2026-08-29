##
## EPITECH PROJECT, 2026
## ~/epitech/free-project/tek2-pool/day01
## File description:
## Makefile
##

CC = epiclang

CFLAGS = -Wall -Wextra -std=gnu17

SRC = array_init.c \
	array_destroy.c \
	empty.c \
	size.c \
	resize.c \
	get.c \
	set.c \
	apply.c

OBJ = $(SRC:.c=.o)

NAME = libarray.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all