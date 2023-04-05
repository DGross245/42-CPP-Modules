/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:47:07 by dgross            #+#    #+#             */
/*   Updated: 2023/04/05 10:51:22 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string club ) : typ( club ) {
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
