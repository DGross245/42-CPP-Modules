/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:46:56 by dgross            #+#    #+#             */
/*   Updated: 2023/02/20 17:13:11 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_objekt.getType() << std::endl;
	return ;
}

HumanA::HumanA( std::string name, Weapon &weapon):_objekt(weapon) {
	this->_name = name;
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}