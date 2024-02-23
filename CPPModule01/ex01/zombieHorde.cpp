/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:09:34 by ekuchel           #+#    #+#             */
/*   Updated: 2024/02/23 18:49:16 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{

	Zombie* horde = new Zombie[N];

	for(int i = 0; i < N; ++i)
	{
		horde[i] = Zombie(name);
	}

	return horde;
}



