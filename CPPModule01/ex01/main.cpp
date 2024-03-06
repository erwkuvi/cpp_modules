/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:07:07 by ekuchel           #+#    #+#             */
/*   Updated: 2024/03/06 16:04:45 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie* leaderHorde = zombieHorde(5, "zombhord");

		for(int i = 0; i < 5; i++)
	{
		std::cout << leaderHorde[i].getName() << std::endl;
	}

	delete[] leaderHorde;
	return 0;
}

