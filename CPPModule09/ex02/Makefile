NAME = PmergeMe

SRC = main.cpp \
			PmergeMe.cpp

CXX = c++
STDFLAG = -std=c++98 -pedantic
CXXFLAGS = -Wall -Wextra -Werror $(STDFLAG)
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
	./$(NAME) 2 1 3 4 5

run1 : $(NAME)
	./$(NAME) "test1"

val : 
	valgrind --leak-check=full ./$(NAME)

.PHONY: all fclean clean re val
