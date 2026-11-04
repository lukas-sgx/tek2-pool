##
## EPITECH PROJECT, 2026
## ~/epitech/free-project/tek2-pool/day01
## File description:
## Makefile
##

CC = epiclang

CFLAGS = -Wall -Wextra -std=gnu17

SRC = list_init.c \
	list_destroy.c \
	empty.c \
	size.c \
	get.c \
	set.c \
	push_front.c \
	push_back.c \
	pop_front.c \
	pop_back.c \
	clear.c \
	apply.c

OBJ = $(SRC:.c=.o)

NAME = liblist.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all