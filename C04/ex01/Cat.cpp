/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:22:50 by dgross            #+#    #+#             */
/*   Updated: 2023/03/19 14:44:01 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat( void ) {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat's default constructor called called" << std::endl;
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
	std::cout << "Meow!" << std::endl;
	return ;
}

Cat &Cat::operator=( Cat const &instance) {
	this->type = instance.type;
	std::cout << "Cat's copy assignment operator called" << std::endl;
	return (*this);
}
