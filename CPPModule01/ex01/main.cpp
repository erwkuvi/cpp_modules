/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:07:07 by ekuchel           #+#    #+#             */
/*   Updated: 2024/03/06 18:03:25 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie* leaderHorde = zombieHorde(5, "zombhord");

		for(int i = 0; i < 5; i++)
	{
		std::cout << i << " ";
		leaderHorde[i].announce();
	}

	delete[] leaderHorde;
	return 0;
}

