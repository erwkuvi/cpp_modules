/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:38:59 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/05 21:56:13 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	f0(void)
{
	Sample	instance;

	std::cout << "Number of inst: " << Sample::getNbInst() << std::endl;
	return ;
}


void	f1(void)
{
	Sample	instance;

	std::cout << "Number of inst: " << Sample::getNbInst() << std::endl;
	f0();
	return ;
}

int	main(void)
{
	std::cout << "Number of inst: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of inst: " << Sample::getNbInst() << std::endl;
	return (0);
}
