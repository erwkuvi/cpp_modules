NAME = btc

SRC = main.cpp \
			BitcoinExchange.cpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
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
	./$(NAME) data_ex.csv

val : 
	valgrind --leak-check=full ./$(NAME)

.PHONY: all fclean clean re val
