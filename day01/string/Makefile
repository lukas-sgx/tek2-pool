##
## EPITECH PROJECT, 2026
## ~/epitech/free-project/tek2-pool/day01
## File description:
## Makefile
##

CC = epiclang

CFLAGS = -Wall -Wextra -std=gnu17

SRC = string_init.c \
	string_destroy.c \
	empty.c \
	length.c \
	at.c \
	print.c \
	clear.c \
	append.c \
	assign.c \

OBJ = $(SRC:.c=.o)

NAME = libstring.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all