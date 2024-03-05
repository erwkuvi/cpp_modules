/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:23:08 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/16 18:06:50 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie(void)
{
	std::cout << _name << ": destroyed" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) const
{
	return _name;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

Zombie*	Zombie::newZombie(std::string name)
{
	return new Zombie(name);
}

//void	Zombie::zombieDestroyer(int N, Zombie* horde)
//{
//	for (int i; i < N; i++)
//	{
//		 delete horde[i];
//	}
//	delete horde;
//}

