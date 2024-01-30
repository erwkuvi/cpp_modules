/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:38:37 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/30 15:46:49 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int main(int argc, char **argv)
{
    std::cout << std::setfill('x') << std::setw(10); //The new fill character for the stream. Number of characters to be used as field width.
}