/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:38:37 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/13 13:33:07 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define BLUE    "\033[34m"
#define YELLOW	"\033[33m"
#define RED     "\033[31m"

int main(void)
{
	std::string	prompt;
	int			idx;
	PhoneBook	instance;

	idx = 0;
	while (true)
	{
		std::cout << BLUE << "PHONEBOOK: " << RESET;
		std::getline(std::cin, prompt);
		if (idx == 8)
			idx = 0;
		if (prompt == "ADD")
		{
			instance.addContact(idx);
			idx++;
		}
		else if (prompt == "SEARCH")
			instance.searchContact();
		else if (prompt == "EXIT")
			break;
		else
			std::cerr << RED << "Error, wrong arguments" << RESET << std::endl;
	}
		std::cout << YELLOW << "BYEEEE!!!" << RESET << std::endl;
	return 0;
}
