# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 14:36:40 by ekuchel           #+#    #+#              #
#    Updated: 2024/02/02 12:51:03 by ekuchel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

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

.PHONY: all re clean fclean
