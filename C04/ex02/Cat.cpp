/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:22:50 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 01:11:03 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat( void ) {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat's default constructor called" << std::endl;
	return ;
}
Cat::Cat( const Cat &obj ) {
	*this = obj;
	std::cout << "Cat's copy constructor called" << std::endl;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Cat's destructor called" << std::endl;
	return ;
}

void	Cat::makeSound( void ) const{
	std::cout << this->getType() << ": Meow!" << std::endl;
	return ;
}

Cat &Cat::operator=( Cat const &instance) {
	this->type = instance.type;
	delete this->brain;
	this->brain = new Brain(*instance.brain);
	std::cout << "Cat's copy assignment operator called" << std::endl;
	return (*this);
}

void Cat::setBrain( unsigned int i, std::string thoughts ) {
	this->brain->setIdeas(i, thoughts);
	return ;
}

void Cat::printBrain( void ) {
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