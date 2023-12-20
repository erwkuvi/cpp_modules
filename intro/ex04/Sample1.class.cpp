/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:24:43 by ekuchel           #+#    #+#             */
/*   Updated: 2023/12/20 15:45:55 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return ;
}

// Sample1::Sample1(char p1, int p2, float p3)
// {
// 	std::cout << "Constructor called" << std::endl;

// 	this->a1 = p1;
// 	std::cout << "this->a1 = " << this->a1 << std::endl;

// 	this->a2 = p2;
// 	std::cout << "this->a2 = " << this->a2 << std::endl;

// 	this->a3 = p3;
// 	std::cout << "this->a3 = " << this->a3 << std::endl;

// 	return ;
// }

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
