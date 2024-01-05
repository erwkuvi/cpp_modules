/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:20:02 by ekuchel           #+#    #+#             */
/*   Updated: 2023/12/20 18:22:53 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void){

	std::cout << "Constructor called" << std::endl;
	this->publicfoo = 0;
	std::cout << "this->publicfoo: " << this->publicfoo << std::endl;
	this->_privatefoo = 0;
	std::cout << "this->_privatfoo: " << this->_privatefoo << std::endl;

	this->publicbar();
	this->_privatebar();

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor was called" << std::endl;
	return ;
}

void	Sample::publicbar(void) const
{
	std::cout << "Member function publicbar called" << std::endl;
	return ;
}

void	Sample::_privatebar(void) const
{
	std::cout << "Member function _privatebar called" << std::endl;
	return ;
}
