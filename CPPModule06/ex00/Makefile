
NAME = convert

SRC = main.cpp \
			ScalarConverter.cpp \
			DefineVar.cpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) -f $(OBJ)

fclean : clean
	$(RM) -f $(NAME)

re : fclean all

run : $(NAME)
	./$(NAME)

val : 
	valgrind --leak-check=full ./$(NAME)

.PHONY: all fclean clean re val
