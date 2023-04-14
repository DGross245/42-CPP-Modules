/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:52:49 by dgross            #+#    #+#             */
/*   Updated: 2023/04/13 13:08:30 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

int main (void)
{
	ScavTrap nameless;
	ScavTrap scav( "Scav" );
	int i = -1;

	scav.attack( "Something" );
	scav.beRepaired( 10 );
	scav.takeDamage( 10 );
	scav.guardGate();
	nameless.attack ( "something" );
	nameless.attack ( "a wall" );
	nameless.beRepaired( 10 );
	nameless.beRepaired( 15 );
	nameless.takeDamage( 20 );
	nameless.takeDamage( 100 );
	nameless.guardGate();

	std::cout << "\nEnergy test!\n" << std::endl;

	ScavTrap NoEnergy( "Bob" );
	
	while (++i < 50)
		NoEnergy.attack( "a Tree" );
	NoEnergy.beRepaired( 10 );
	NoEnergy.attack( "door" );

	std::cout << "\nDeath test!\n" << std::endl; 
	
	ScavTrap Dead( "clown" );

	Dead.takeDamage( 100 );
	Dead.takeDamage( 10 );
	Dead.beRepaired( 10 );
	Dead.attack( "someone" );

	std::cout << std::endl;

	return (0);
}
