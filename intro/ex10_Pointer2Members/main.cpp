/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:38:59 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/05 22:36:34 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


int	main(void)
{
	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of foo: " << instance.foo << std::endl;
	instance.*p = 42;
	std::cout << "Value of foo: " << instance.foo << std::endl;
	instancep->*p = 21;
	std::cout << "Value of foo: " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return (0);
}
