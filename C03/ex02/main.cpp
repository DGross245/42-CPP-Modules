/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:57:10 by dgross            #+#    #+#             */
/*   Updated: 2023/04/13 13:24:55 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main( void ) 
{
	FragTrap A;
	FragTrap B( "Special" );
	FragTrap C( A );
	int i = -1;

	A.attack( "Tree" );
	A.beRepaired( 10 );
	A.takeDamage( 10 );
	A.highFiveGuys();
	B.attack( "Tree" );
	B.beRepaired( 10 );
	B.takeDamage( 10 );
	B.highFiveGuys();
	C.attack( "Tree" );
	C.beRepaired( 10 );
	C.takeDamage( 10 );
	C.highFiveGuys();

	std::cout << "\nEnergy test!\n" << std::endl;

	FragTrap NoEnergy( "Bob" );
	
	while (++i < 100)
		NoEnergy.attack( "a Tree" );
	NoEnergy.beRepaired( 10 );
	NoEnergy.attack( "door" );

	std::cout << "\nDeath test!\n" << std::endl; 
	
	FragTrap Dead( "clown" );
	
	Dead.takeDamage( 100 );
	Dead.takeDamage( 10 );
	Dead.beRepaired( 10 );
	Dead.attack( "someone" );

	std::cout << std::endl;
	return (0);
}
