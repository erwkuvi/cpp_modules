/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:39:30 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/06 18:45:40 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(void) : filled(0)
{
	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
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
	// if (input.length() >= 10)
	// 	input = input.substr(0, 9) + '.';
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
