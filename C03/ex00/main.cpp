/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:52:57 by dgross            #+#    #+#             */
/*   Updated: 2023/04/12 16:56:06 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap Default;
	ClapTrap Killer9000( "Killer9000" );
	int i = -1;

	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Default.attack( "Killer9000" );
	Killer9000.takeDamage( 5 );
	Default.beRepaired( 4294967295 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 10 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Default.beRepaired( 10 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Default.beRepaired( 10 );

	std::cout << "\nenergy test!\n" << std::endl;
	
	ClapTrap NoEnergy( "Bob" );
	
	while (++i < 11)
		NoEnergy.attack( "a Tree" );
	NoEnergy.beRepaired( 10 );
	NoEnergy.attack( "door" );
	
	std::cout << "\nDeath test!\n" << std::endl; 
	
	ClapTrap Dead( "clown" );

	Dead.takeDamage( 100 );
	Dead.takeDamage( 10 );
	Dead.beRepaired( 10 );
	Dead.attack( "someone" );

	std::cout << std::endl;

	return (0);
}
