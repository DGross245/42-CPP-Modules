/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:52:49 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 15:55:38 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

int main (void)
{
	ScavTrap nameless;
	ScavTrap scav( "Scav" );

	scav.attack( "Something" );
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();
	nameless.attack ( "something" );
	nameless.attack ( "a wall" );
	nameless.beRepaired(10);
	nameless.beRepaired(15);
	nameless.takeDamage(20);
	nameless.takeDamage(100);
	nameless.guardGate();
	return (0);
}