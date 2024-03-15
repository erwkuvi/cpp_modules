NAME = weapon

SRC = main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp 

CC = c++
STDFLAG = -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM = rm

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(STDFLAG) $(OBJ) -o $(NAME)

clean :
	$(RM) -f $(OBJ)

fclean : clean
	$(RM) -f $(NAME)

re : fclean all

val :
	valgrind --leak-check=full ./$(NAME)

.PHONY: all fclean clean re val
