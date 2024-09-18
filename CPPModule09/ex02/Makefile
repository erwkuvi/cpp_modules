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
	./$(NAME) 25 70 51 39 6 71 49 100 74 69
#run : $(NAME)
#	shuf -i 1-100 -n 10 | tr "\n" " " | xargs ./$(NAME)

run100 : $(NAME)
	shuf -i 1-5000 -n 100 | tr "\n" " " | xargs ./$(NAME)

run500 : $(NAME)
	shuf -i 1-5000 -n 500 | tr "\n" " " | xargs ./$(NAME)

run1000 : $(NAME)
	shuf -i 1-5000 -n 1000 | tr "\n" " " | xargs ./$(NAME)

run3000 : $(NAME)
	shuf -i 1-5000 -n 3000 | tr "\n" " " | xargs ./$(NAME)

val : 
	valgrind --leak-check=full ./$(NAME) 3 4 5 1 7

.PHONY: all fclean clean re val

