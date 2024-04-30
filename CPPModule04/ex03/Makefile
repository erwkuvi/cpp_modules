NAME = interface

SRC = main.cpp\
			Ice.cpp\
			Cure.cpp\
			AMateria.cpp\
			Character.cpp\
			ICharacter.cpp\
			FloorList.cpp\
			FloorNode.cpp\
			MateriaSource.cpp\
			IMateriaSource.cpp


CXX = c++
STDFLAG = -std=c++98 #Wshadow
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
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all fclean clean re val
