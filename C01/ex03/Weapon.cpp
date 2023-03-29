/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:47:07 by dgross            #+#    #+#             */
/*   Updated: 2023/03/29 07:17:30 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string club ) {
	this->typ = club;
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

void Weapon::setType( std::string typ ) {
	this->typ = typ;
	return ;
};

std::string	const &Weapon::getType( void ){
	return(this->typ);
}
