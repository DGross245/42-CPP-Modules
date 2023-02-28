/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:52:49 by dgross            #+#    #+#             */
/*   Updated: 2023/02/28 06:06:23 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

int main (void)
{
	std::cout << "========================================" << std::endl;
	std::cout << "Creating ScavTrap..." << std::endl;
	ScavTrap scavtrap("Bob");

	std::cout << "========================================" << std::endl;
	std::cout << "Calling attack..." << std::endl;
	scavtrap.attack("enemy");

	std::cout << "========================================" << std::endl;
	std::cout << "Calling guardGate..." << std::endl;
	scavtrap.guardGate();

	std::cout << "========================================" << std::endl;
	std::cout << "Destroying ScavTrap..." << std::endl;
	return 0;
}