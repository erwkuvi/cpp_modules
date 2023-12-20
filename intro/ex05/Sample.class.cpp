/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:22:39 by ekuchel           #+#    #+#             */
/*   Updated: 2023/12/20 16:32:13 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(float const f) : pi(f), qd(42){

	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void){

	std::cout << "Deconstructor called" << std::endl;
	return ;
}

void	Sample::bar(void) const{

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;
	return ;
}
