/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:02:22 by dgross            #+#    #+#             */
/*   Updated: 2023/02/22 16:34:22 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

const int	Fixed::Bits = 8;

Fixed::Fixed( int const Integer) {
	this->Nbr = Integer >> Bits;
}

Fixed::Fixed( float const Float) {
	int integer;

	integer = Float * (1 << Bits);
	this->Nbr = roundf( Float * (1 << Bits));
	return ;
}

std::ostream &operator<<( std::ostream &output, Fixed const &obj) {
	output << obj.toFloat();
	return (output);
}

Fixed::Fixed( const Fixed &instance ) {
	this->Nbr = instance.Nbr;
	return ;	
}

Fixed::Fixed( void ) {
	this->Nbr = 0;
	return ;
}
Fixed::~Fixed( void ) {
	return ;
}

float Fixed::toFloat( void ) const{
	float Float;

	Float = this->Nbr / (1 << Bits);
	return (Float);
}

int	Fixed::toInt( void ) const{
	int integer;

	integer = this->Nbr / (1 << Bits);
	return (integer);
}

Fixed	&Fixed::operator=(Fixed const &obj) {
	this->Nbr = obj.Nbr;
	return (*this);
}

void	Fixed::setRawBits( int const raw ) {
	this->Nbr = raw;
	return ;
}

int		Fixed::getRawBits( void ) const{
	return (this->Nbr);
}