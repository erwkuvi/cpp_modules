/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:42:13 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/05 21:19:19 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

int	Sample::compare(Sample * other) const
{
	if (this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}
