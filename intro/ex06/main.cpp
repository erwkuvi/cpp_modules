/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:23:12 by ekuchel           #+#    #+#             */
/*   Updated: 2023/12/20 18:29:56 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main (void)
{
	Sample	instance;

	instance.publicfoo = 42;
	std::cout << "instance.publicfoo: " << instance.publicfoo << std::endl;

	// instance._privatefoo = 42;
	// std::cout << "instance.privatefoo: " << instance._privatefoo << std::endl;

	instance.publicbar();
	// instance._privatebar();

	return (0);
}
