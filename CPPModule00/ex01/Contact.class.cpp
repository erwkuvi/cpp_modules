/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:39:30 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/13 15:44:25 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"

Contact::Contact(void) : filled(0)
{
	// std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Contact destructor called" << std::endl;
	return ;
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
