/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:59:02 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 16:59:39 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : type( "WrongAnimal" ){
	std::cout << "WrongAnimal's default constructor called" << std::endl;
	return ;
}
WrongAnimal::WrongAnimal( const WrongAnimal &obj ) {
	*this = obj;
	std::cout << "WrongAnimal's copy constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal's destructor called" << std::endl;
	return ;
}
WrongAnimal &WrongAnimal::operator=( WrongAnimal const &instance) {
	this->type = instance.type;
	std::cout << "WrongAnimal's copy assignment operator called" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const{
	std::cout << this->getType() <<": woof woof ... I mean Meow" << std::endl;
	return ;
}

std::string WrongAnimal::getType( void ) const{
	return (this->type);
}