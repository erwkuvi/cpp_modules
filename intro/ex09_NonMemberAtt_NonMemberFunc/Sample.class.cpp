/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:42:13 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/05 21:57:40 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor is called" << std::endl;
	Sample::_nbInst += 1;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor is called" << std::endl;
	Sample::_nbInst -= 1;
	return ;
}

int	Sample::getNbInst(void)
{
	return Sample::_nbInst;
}

int	Sample::_nbInst = 0;

