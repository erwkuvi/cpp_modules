/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class2.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:42:54 by ekuchel           #+#    #+#             */
/*   Updated: 2023/12/20 14:03:33 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class2.hpp"

/* "::" - scope resolution operator. */

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "Value of foo is: " << this->foo << std::endl;

	this->bar();

	return ;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void) {

	std::cout << "Member function bar called" << std::endl;
	return ;

}
