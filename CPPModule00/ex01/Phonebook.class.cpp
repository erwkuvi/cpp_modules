/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:48:07 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/02 17:30:38 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"

std::string Contact::getName(std::string column)
{
    if (column.compare("firstName") == 0)
        return this->_firstName;
    else if (column.compare("lastName") == 0)

        return this->_lastName;
    else if (column.compare("nickName") == 0)
        return this->_nickName;
    else if (column.compare("phone") == 0)
        return this->_phone;
    else if (column.compare("darkestSecret") == 0)
        return this->_darkestSecret;    
}


bool    Contact::setName(std::string input, std::string column)
{
    std::string trunc_input;

    if (input.length() >= 10)
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

bool    PhoneBook::addContact(Contact contact, int index)
{

    return true;
}