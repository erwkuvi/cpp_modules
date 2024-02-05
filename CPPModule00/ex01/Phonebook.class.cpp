/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:48:07 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/05 19:34:21 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

std::string Contact::getName(std::string column)
{
	if (column.compare("firstName") == 0)
		return (this->_firstName);
	else if (column.compare("lastName") == 0)
		return (this->_lastName);
	else if (column.compare("nickName") == 0)
		return (this->_nickName);
	else if (column.compare("phone") == 0)
		return (this->_phone);
	else if (column.compare("darkestSecret") == 0)
		return (this->_darkestSecret);

	return 0;
}


bool	Contact::setName(std::string input, std::string column)
{
	if (input.length() >= 10)
		input = input.substr(0, 9) + '.';
	if (column.compare("firstName") == 0)
		this->_firstName = input;
	else if (column.compare("lastName") == 0)
		this->_lastName = input;
	else if (column.compare("nickName") == 0)
		this->_nickName = input;
	else if (column.compare("phone") == 0)
		this->_phone = input;
	else if (column.compare("darkestSecret") == 0)
		this->_darkestSecret = input;
	else
		return false;
	return true;
}

bool	EmptyString(std::string &str)
{
    // Initialize an index to 0
    std::size_t index = 0;

    // Initialize a flag to true
    bool allWhitespace = true;

    // Iterate through each character using a while loop
    while (index < str.length()) {
        char c = str[index];

        // Check if the character is not a whitespace character
        if (!std::isspace(static_cast<unsigned char>(c))) {
            // If any non-whitespace character is found, set the flag to false and break
            allWhitespace = false;
            break;
        }

        // Move to the next character
        ++index;
    }

    // Return true if the string is empty or contains only whitespace characters
    return allWhitespace || str.empty();
}

std::string	InputLoop(std::string column)
{
	std::string input;
	std::string message;

	if (column == "firstName")
		message = "First Name: ";
	else if (column == "lastName")
		message = "Last Name: ";
	else if (column == "nickName")
		message = "Nickname: ";
	else if (column == "phone")
		message = "Phone: ";
	else if (column == "darkestSecret")
		message = "Darkest Secret: ";
	while (true)
	{
		std::cout << message;
		std::getline(std::cin, input);
		if (EmptyString(input))
			std::cout << "No empty fields allowed, try again!" << std::endl;
		else
			break;
	}
	return input;
}

void	PhoneBook::addContact(int index)
{
	std::string str;
	str = InputLoop("firstName");
	_contact[index].setName(str, "firstName");
	str = InputLoop("lastName");
	_contact[index].setName(str, "lastName");
	str = InputLoop("nickName");
	_contact[index].setName(str, "nickName");
	str = InputLoop("phone");
	_contact[index].setName(str, "phone");
	str = InputLoop("darkestSecret");
	_contact[index].setName(str, "darkestSecret");
	std::cout << std::endl;
	std::cout << "NEW CONTACT ADDED!!!" << std::endl;
	std::cout << std::endl;
}
