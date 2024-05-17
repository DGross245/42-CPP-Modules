/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:02:22 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:09:40 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

const int	Fixed::Bits = 8;

Fixed::Fixed( int const Integer ) {
	this->Nbr = Integer << Bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const Float ) {
	this->Nbr = roundf( Float * (1 << Bits) );
	std::cout << "Float constructor called" << std::endl;
	return ;
}

std::ostream &operator<<( std::ostream &output, Fixed const &obj ) {
	output << obj.toFloat();
	return (output);
}

Fixed::Fixed( const Fixed &instance ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
	return ;	
}

Fixed::Fixed( void ) {
	this->Nbr = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}
Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

float Fixed::toFloat( void ) const{
	float Float;

	Float = roundf( this->Nbr ) / (float)(1 << Bits);
	return (Float);
}

int	Fixed::toInt( void ) const{
	int integer;

	integer = this->Nbr / (1 << Bits);
	return (integer);
}

Fixed	&Fixed::operator=(Fixed const &obj) {
	this->Nbr = obj.Nbr;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void	Fixed::setRawBits( int const raw ) {
	this->Nbr = raw;
	return ;
}

int		Fixed::getRawBits( void ) const{
	return (this->Nbr);
}
