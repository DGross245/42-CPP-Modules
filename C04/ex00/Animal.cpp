/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:22:38 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 17:25:56 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal( void ) : type( "Animal" ) {
	std::cout << "Animal's default constructor called" << std::endl;
	return ;
}
Animal::Animal( const Animal &obj ) {
	*this = obj;
	std::cout << "Animal's copy constructor called" << std::endl;
	return ;
}

Animal::~Animal( void ) {
	std::cout << "Animal's destructor called" << std::endl;
	return ;
}
Animal &Animal::operator=( Animal const &instance) {
	this->type = instance.type;
	std::cout << "Animal's copy assignment operator called" << std::endl;
	return (*this);
}

void	Animal::makeSound( void ) const{
	std::cout << this->getType() << ": Doing a Animal sound!" << std::endl;
	return ;
}
std::string Animal::getType( void ) const{
	return (this->type);
}
