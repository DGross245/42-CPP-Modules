/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:22:58 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 16:38:39 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) {
	this->type = "Dog";
	std::cout << "Dog's default constructor called" << std::endl;
	return ;
}
Dog::Dog( const Dog &obj ) : Animal(obj) {
	*this = obj;
	std::cout << "Dog's copy constructor called" << std::endl;
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Dog's destructor called" << std::endl;
	return ;
}
Dog &Dog::operator=( Dog const &instance) {
	this->type = instance.type;
	std::cout << "Dog's copy assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout << this->getType() << ": woof!" << std::endl;
	return ;
}