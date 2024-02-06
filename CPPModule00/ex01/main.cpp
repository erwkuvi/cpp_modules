/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:38:37 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/06 19:03:11 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <string>
#include <iostream>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int main(int argc, char **argv)
{
	int			idx;
	PhoneBook	instance;
	std::string	prompt;

	(void)argc;
	(void)argv;
	idx = 0;
	while (true)
	{
		if (idx == 8)
			idx = 0;
		std::cout << "PHONEBOOK: ";
		std::getline(std::cin, prompt);
		if (prompt == "ADD"){
			instance.addContact(idx);
			idx++;
		}
		else if (prompt == "SEARCH"){
			instance.searchContact();
		}
		else if (prompt == "EXIT"){
			break;
		}
		else{
			std::cerr << "Error, wrong arguments" << std::endl;
		}
	}
		std::cout << "BYEEEE!!!" << std::endl;
	return 0;
	// PhoneBook instance;
    // std::cout << std::setfill('x') << std::setw(10); //The new fill character for the stream. Number of characters to be used as field width.
}

