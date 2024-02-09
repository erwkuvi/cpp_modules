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


.PHONY: all re clean fclean git
