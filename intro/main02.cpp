/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:41:33 by ekuchel           #+#    #+#             */
/*   Updated: 2023/12/20 13:43:59 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int	main()
{
	Sample	instance;

	instance.foo = 42;
	std::cout << "Value of instance.foo is: " << instance.foo << std::endl;
	instance.bar();

	return 0;
}
