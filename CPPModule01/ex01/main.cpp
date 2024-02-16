/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:07:07 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/15 18:52:52 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie instance("InstanceZombie");

	Zombie	*zombCopy = instance.newZombie("AllocZombie");
	zombCopy->announce();
	instance.randomChump("StackZombie");
	delete zombCopy;
	return 0;
}

