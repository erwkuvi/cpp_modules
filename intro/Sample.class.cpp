/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:42:54 by ekuchel           #+#    #+#             */
/*   Updated: 2023/12/19 16:37:43 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

/* "::" - scope resolution operator. */

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}
