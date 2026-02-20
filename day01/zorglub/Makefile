##
## EPITECH PROJECT, 2026
## ~/epitech/free-project/tek2-pool/day01
## File description:
## Makefile
##

CC = epiclang

CFLAGS = -Wall -Wextra -std=gnu17

SRC = z.c

OBJ = $(SRC:.c=.o)

NAME = z

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all