##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

CC  =   gcc

BIN =   my_hunter

SRC =   $(wildcard *.c)

OBJ =   $(SRC:.c=.o)

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) -o $(BIN) $(OBJ) -lcsfml-graphics -lcsfml-window \
	-lcsfml-system -lcsfml-audio

clean:
	rm -rf $(OBJ).gch

fclean: clean
	rm -rf $(BIN)
	clear

re: fclean all
