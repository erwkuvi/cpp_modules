/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:48:07 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/13 15:44:13 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"

PhoneBook::PhoneBook(void)
{
	// std::cout << "PhoneBook constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook destructor called" << std::endl;
	return;
}

bool	isInputValid(std::string &str, int currContacts)
{
	size_t	i = 0;
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		if (i >= 1)
			return false;
		if (!isdigit(*it))
			return false;
		if (*it - '0' > currContacts || *it == '0')
			return false;
		i++;
	}
	return true;
}

bool	EmptyString(std::string &str)
{
    std::size_t index = 0;

    bool allWhitespace = true;

	while (index < str.length())
	{
		char c = str[index];
		if (!std::isspace(c))
		{
			allWhitespace = false;
			break;
		}
		index++;
	}
	return allWhitespace || str.empty();
}

std::string	InputLoop(std::string column, int currContacts)
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
	else if (column == "index")
		message = "Type a contact index: ";
	while (true)
	{
		std::cout << message;
		std::getline(std::cin, input);
		if (EmptyString(input))
			std::cerr << RED << "Error, no empty fields allowed, try again!" << RESET << std::endl;
		else if (column == "index" && !isInputValid(input, currContacts))
			std::cerr << RED << "Error, input not valid or out of range, try again!" << RESET << std::endl;
		else
			break;
	}
	return input;
}

void	PhoneBook::addContact(int index)
{
	_contact[index].setName(InputLoop("firstName", 0), "firstName");
	_contact[index].setName(InputLoop("lastName", 0), "lastName");
	_contact[index].setName(InputLoop("nickName", 0), "nickName");
	_contact[index].setName(InputLoop("phone", 0), "phone");
	_contact[index].setName(InputLoop("darkestSecret", 0), "darkestSecret");
	std::cout << GREEN << "NEW CONTACT ADDED!!!" << RESET << std::endl;
	_contact[index].filled = 1;
}

void	resizeField(std::string str)
{
	if(str.length() >= 10)
		std::cout << std::setw(10) << str.substr(0, 9) + '.';
	else
		std::cout << std::setw(10) << str;
}

void	PhoneBook::searchContact(void)
{
	int	currContacts = 0;

	for (size_t i = 0; i < 8; i++)
	{
		if (_contact[i].filled)
		{
			std::cout << std::setw(10) << i + 1;
			std::cout << GREEN << "|" << RESET;
			resizeField(_contact[i].getName("firstName"));
			std::cout << GREEN << "|" << RESET;
			resizeField(_contact[i].getName("lastName"));
			std::cout << GREEN << "|" << RESET;
			resizeField(_contact[i].getName("nickName"));
			std::cout << std::endl;
			if (currContacts < 8)
				currContacts++;
		}
	}
	if (currContacts)
	{
		std::string str = InputLoop("index", currContacts);
		currContacts = (str[0] - '0') - 1;
		std::cout << MAGENTA << "First Name: " << RESET;
		std::cout << _contact[currContacts].getName("firstName") << std::endl;
		std::cout << MAGENTA << "Last Name: " << RESET;
		std::cout << _contact[currContacts].getName("lastName") << std::endl;
		std::cout << MAGENTA << "Nickname: " << RESET;
		std::cout << _contact[currContacts].getName("nickName") << std::endl;
		std::cout << MAGENTA << "Phone: " << RESET;
		std::cout << _contact[currContacts].getName("phone") << std::endl;
		std::cout << MAGENTA << "Darkest secret: " << RESET;
		std::cout << _contact[currContacts].getName("darkestSecret") << std::endl;
	}
	else
		std::cerr << RED << "Error, no contacts added yet, please add some." << RESET << std::endl;
}
