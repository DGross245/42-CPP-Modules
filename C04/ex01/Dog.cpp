/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:22:58 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 16:56:18 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog( void ) {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog's default constructor called" << std::endl;
	return ;
}

Dog::Dog( const Dog &obj ) : Animal(obj) {
	this->brain = NULL;
	*this = obj;
	std::cout << "Dog's copy constructor called" << std::endl;
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Dog's destructor called" << std::endl;
	delete this->brain;
	return ;
}

void	Dog::makeSound( void ) const{
	std::cout << this->getType() << ": woof!" << std::endl;
	return ;
}

Dog &Dog::operator=( Dog const &instance) {
	this->type = instance.type;
	if (this->brain)
		delete brain;
	this->brain = new Brain(*instance.brain);
	std::cout << "Dog's copy assignment operator called" << std::endl;
	return (*this);
}

void Dog::setBrain( unsigned int i, std::string thoughts ) {
	this->brain->setIdeas(i, thoughts);
	return ;
}

void Dog::printBrain( void ) {
	for (int i = 0; i < 100; i++) {  
		if (this->brain->getIdeas(i) == "BLANK")
			;
		else
		{
			std::cout << "Idea : " << this->brain->getIdeas(i) << std::endl;
			std::cout << "Address : " << this->brain->getAddress(i) << std::endl;
		}
	}
	return ;
}