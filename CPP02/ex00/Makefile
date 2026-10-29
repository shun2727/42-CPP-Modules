CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++

NAME = OCM
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

all : $(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

.PHONY : clean fclean re all