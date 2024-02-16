/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:23:08 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/15 18:52:06 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie(void)
{
	std::cout << _name << ": destroyed" << std::endl;
}

Zombie*	Zombie::zombieHorde(int N, std::string name)
{

}

void	Zombie::zombieDestroyer(int N, Zombie* horde)
{

}

