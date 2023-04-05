/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:47:01 by dgross            #+#    #+#             */
/*   Updated: 2023/04/05 10:44:59 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "HumanB.hpp"

void HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
	return ;
}

HumanB::HumanB( std::string name ) : _name( name ), _Weapon( NULL ) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void HumanB::setWeapon( Weapon &club ) {
	this->_Weapon = &club;
	return ;
}