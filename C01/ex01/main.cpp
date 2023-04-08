/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:53:25 by dna               #+#    #+#             */
/*   Updated: 2023/04/07 22:37:40 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int	getnbr( void )
{
	std::string str;
	int i = -1;
	int nbr = 0;

	std::cout << "type the number of Zombies to create : ";
	std::cin >> str;
	std::cout << std::endl;
	while (str[++i] != '\0')
	{
		while (str[i] < '0' || str[i] > '9')
		{
			std::cout << "ERROR" << std::endl;
			std::cout << "Pls enter a number : ";
			std::cin >> str;
			std::cout << std::endl;
		}
		nbr = 10 * nbr + (str[i] - '0');
	}
	return (nbr);
}

std::string getname( void )
{
	std::string name;

	std::cout << "type the name of the Zombies to create : ";
	std::cin >> name;
	std::cout << std::endl;
	return (name);
}

int main ( void )
{
	Zombie *instance;
	int nbr;

	nbr = getnbr();
	instance = zombieHorde(nbr, getname());

	for (int i = 0; i < nbr; i++)
		instance[i].announce();

	delete[] instance;
	return (0);
}
