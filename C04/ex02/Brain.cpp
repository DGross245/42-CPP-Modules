/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:17:45 by dgross            #+#    #+#             */
/*   Updated: 2023/03/19 15:44:19 by dgross           ###   ########.fr       */
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
	std::cout << "Brain's copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = instance.ideas[i];
	return (*this);
}