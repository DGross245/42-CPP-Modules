/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:23:19 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 17:55:08 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

#include <iostream>

WrongCat::WrongCat( void ) {
	this->type = "WrongCat";
	std::cout << "WrongCat's default constructor called" << std::endl;
	return ;
}
WrongCat::WrongCat( const WrongCat &obj ) {
	*this = obj;
	std::cout << "WrongCat's copy constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat's destructor called" << std::endl;
	return ;
}
WrongCat &WrongCat::operator=( WrongCat const &instance) {
	this->type = instance.type;
	std::cout << "WrongCat's copy assignment operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound( void ) const{
	std::cout << this->getType() << " Wrong sound!" << std::endl;
	return ;
}
