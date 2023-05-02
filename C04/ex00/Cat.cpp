/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:22:50 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 16:38:43 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) {
	this->type = "Cat";
	std::cout << "Cat's default constructor called" << std::endl;
	return ;
}
Cat::Cat( const Cat &obj ) : Animal(obj) {
	*this = obj;
	std::cout << "Cat's copy constructor called" << std::endl;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Cat's destructor called" << std::endl;
	return ;
}
Cat &Cat::operator=( Cat const &instance) {
	this->type = instance.type;
	std::cout << "Cat's copy assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << this->getType() << ": Meow!" << std::endl;
	return ;
}