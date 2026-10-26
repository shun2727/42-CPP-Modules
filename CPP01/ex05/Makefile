CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++

NAME = Harl
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

all : $(NAME)

#how do we create the objects (by compiling with -c)
#create the .o by having it's .cpp counterpart
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

#specify program, say what it depends on (object files) specify how to make object files from cpp files

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

.PHONY : clean fclean re all