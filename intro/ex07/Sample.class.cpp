/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:27:07 by ekuchel           #+#    #+#             */
/*   Updated: 2023/12/21 18:43:41 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){

	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void){

	std::cout << "Deconstructor called" << std::endl;
	return ;
}

int		Sample::getFoo(void) const{

	return this->_foo;
}

void	Sample::setFoo(int	f){
	if (f >= 0)
		this->_foo = f;
}
