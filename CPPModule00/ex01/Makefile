# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 12:27:27 by ekuchel           #+#    #+#              #
#    Updated: 2024/02/13 11:31:51 by ekuchel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp \
	PhoneBook.class.cpp \
	Contact.class.cpp \

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

.PHONY: all re clean fclean
