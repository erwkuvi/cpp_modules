# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 12:27:27 by ekuchel           #+#    #+#              #
#    Updated: 2024/02/06 15:53:19 by ekuchel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp \
	Phonebook.class.cpp \
	Contact.class.cpp \

CFLAGS = -Wall -Wextra -Werror
STDFLAG = -std=c++98
RM = rm -rf
CC = c++

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CFLAGS) $(STDFLAG) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

git: fclean
	git add ./
	git commit -m "$m"
	git push

.PHONY: all re clean fclean git
