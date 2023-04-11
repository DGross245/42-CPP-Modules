/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:30:44 by dgross            #+#    #+#             */
/*   Updated: 2023/04/11 08:31:24 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

const int	Fixed::Bits = 8;

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->Nbr = raw;
	return ;
}

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->Nbr);
}

Fixed	&Fixed::operator=(Fixed const &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->Nbr = obj.getRawBits();
	return (*this);
}

Fixed::Fixed( const Fixed &instance ) {
	std::cout << "Copy constructor called" << std::endl;
	this->Nbr = instance.getRawBits();
	return ;	
}

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->Nbr = 0;
	return ;	
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}