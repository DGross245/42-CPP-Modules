/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:59:02 by dgross            #+#    #+#             */
/*   Updated: 2023/02/28 09:15:36 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal's default constructor called called" << std::endl;
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
	if (this->type == "Wrong")
		std::cout << "woof woof ... I mean Meow" << std::endl;
	else
		std::cout << "Vroom, vroom, vroom!" << std::endl;
	return ;
}

std::string WrongAnimal::getType( void ) const{
	return (this->type);
}