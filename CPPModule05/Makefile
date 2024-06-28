
NAME = animal

SRC = main.cpp \
			Animal.cpp \
			WrongAnimal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongCat.cpp

CXX = c++
STDFLAG = -std=c++98
CXXFLAGS = -Wall -Wextra -Werror
RM = rm

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(STDFLAG) $(OBJ) -o $(NAME)

clean :
	$(RM) -f $(OBJ)

fclean : clean
	$(RM) -f $(NAME)

re : fclean all

val : 
	valgrind --leak-check=full ./$(NAME)

.PHONY: all fclean clean re val
