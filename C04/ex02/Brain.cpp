/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:17:45 by dgross            #+#    #+#             */
/*   Updated: 2023/02/28 09:26:22 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain( void ) {
	std::cout << "Brain's default constructor called called" << std::endl;
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
	this->ideas = instance.ideas;
	std::cout << "Brain's copy assignment operator called" << std::endl;
	return (*this);
}
