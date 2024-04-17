# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 12:27:27 by ekuchel           #+#    #+#              #
#    Updated: 2024/02/09 16:13:55 by ekuchel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRC = tests.cpp \
	Account.cpp \

CXXFLAGS = -Wall -Wextra -Werror
STDFLAG = -std=c++98
RM = rm -rf
CXX = c++

all : $(NAME)

$(NAME) : $(SRC)
	$(CXX) $(CXXFLAGS) $(STDFLAG) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all


.PHONY: all re clean fclean git
