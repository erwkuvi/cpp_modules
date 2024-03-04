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
	Zombie instance("leader");

	Zombie *leader = instance.zombieHorde(5, "zombhord");
	
		for(int i = 0; i < 5; i++)
	{
		std::cout << leader[i].getName() << std::endl;
	}
	return 0;
}

