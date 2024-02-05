/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:37:02 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/12 14:41:23 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			int	j = 0;
			while (argv[i][j]) 
			{
				std::cout << (char) toupper(argv[i][j]);
				j++;
			}
			i++;
			// if (i != argc)
			// 	std::cout << ' ' ;
		}	
		std::cout << std::endl;
	}	
	return (0);
}