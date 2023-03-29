/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:46:56 by dgross            #+#    #+#             */
/*   Updated: 2023/03/29 07:17:08 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_objekt.getType() << std::endl;
	return ;
}

HumanA::HumanA( std::string name, Weapon &weapon ) :_objekt( weapon ) {
	this->_name = name;
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}