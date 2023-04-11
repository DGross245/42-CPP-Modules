/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:52:57 by dgross            #+#    #+#             */
/*   Updated: 2023/04/11 16:42:07 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Default;
	ClapTrap Killer9000( "Killer9000" );
	int i = -1;

	Killer9000.attack( "Default" );
	Default.takeDamage( 500 );
	Default.attack( "Killer9000" );
	Killer9000.takeDamage( 5 );
	Default.beRepaired( 10 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Default.beRepaired( 10 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Default.beRepaired( 10 );
	Default.takeDamage( 25 );
	while (++i < 6)
		Killer9000.attack( "a Tree" );
	return (0);
}
