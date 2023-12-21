/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:26:29 by ekuchel           #+#    #+#             */
/*   Updated: 2023/12/21 18:47:41 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int	main(void)
{
	Sample	instance;

	instance.setFoo(12);
	std::cout << "Value of foo is: " << instance.getFoo() << std::endl;

	instance.setFoo(42);
	std::cout << "Value of foo is: " << instance.getFoo() << std::endl;

	return 0;
}
