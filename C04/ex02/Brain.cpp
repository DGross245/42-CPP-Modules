/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:17:45 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:13:49 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain( void ) {
	std::cout << "Brain's default constructor called" << std::endl;
	return ;
}

Brain::Brain( const Brain &obj ) {
	*this = obj;
	std::cout << "Brain's copy constructor called" << std::endl;
	return ;
}

Brain::~Brain( void ) {
	std::cout << "Brain's destructor called" << std::endl;
	return ;
}

Brain &Brain::operator=( Brain const &instance) {
	std::cout << "Brain's copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = instance.ideas[i];
	return (*this);
}

void Brain::setIdeas( unsigned int i, std::string thoughts ) {
	if (i < 100)
		this->ideas[i] = thoughts;
	else
		std::cout << "its brain cant hold this thought" << std::endl;
	return ;
}

std::string Brain::getIdeas( unsigned int i ) {
	if (!this->ideas[i].empty())
		return(this->ideas[i]);
	else
		return ("BLANK");
}

std::string *Brain::getAddress( unsigned int i ) {
	if (!this->ideas[i].empty())
		return(&this->ideas[i]);
	else
		return (NULL);
}