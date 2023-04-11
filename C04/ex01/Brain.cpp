/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:17:45 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 17:34:05 by dna              ###   ########.fr       */
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
