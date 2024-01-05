/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:38:59 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/05 21:23:24 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance1(42);
	Sample	instance2(42);

	if (&instance1 == &instance2)
		std::cout << "Instances are equal in memory" << std::endl;
	else
		std::cout << "Instances are not equal in memory" << std::endl;
	if (!instance1.compare(&instance2))
		std::cout << "Instances are equal in value" << std::endl;
	else
		std::cout << "Instances are not equal in value" << std::endl;
	return (0);
}
