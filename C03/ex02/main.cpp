/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:57:10 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 16:02:58 by dna              ###   ########.fr       */
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
	
	return (0);
}
