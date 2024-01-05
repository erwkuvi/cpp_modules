/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:42:13 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/05 22:37:07 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void) : foo(0)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

void	Sample::bar(void) const
{
	std::cout << "Bar Function is called" << std::endl;
	return ;
}


