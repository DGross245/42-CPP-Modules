/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:22:38 by dgross            #+#    #+#             */
/*   Updated: 2023/02/28 08:53:29 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal( void ) {
	std::cout << "Animal's default constructor called called" << std::endl;
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
	if (this->type == "Cat")
		std::cout << "Meow!" << std::endl;
	else if (this->type == "Dog")
		std::cout << "woof!" << std::endl;
	else
		std::cout << "Doing a sound!" << std::endl;
	return ;
}
std::string Animal::getType( void ) const{
	return (this->type);
}
