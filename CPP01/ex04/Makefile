CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++

NAME = sedloser
SRC = main.cpp replaceString.cpp
OBJ = $(SRC:.cpp=.o) ##this is just tellng it how th eobject files look like, it doesnt make it for them

all : $(NAME)

#$@ is target
#< is prerequisite 

#what we want to create
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

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