/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:55:27 by dgross            #+#    #+#             */
/*   Updated: 2023/04/08 10:39:59 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

const int	Fixed::Bits = 8;

Fixed::Fixed( int const Integer ) {
	this->Nbr = Integer << Bits;
}

Fixed::Fixed( float const Float ) {
	this->Nbr = roundf( Float * (1 << Bits) );
	return ;
}


Fixed::Fixed( const Fixed &instance ) {
	*this = instance;
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

	Float = roundf( this->Nbr ) / (float)(1 << Bits);
	return (Float);
}

int	Fixed::toInt( void ) const{
	int integer;

	integer = this->Nbr / (1 << Bits);
	return (integer);
}


void	Fixed::setRawBits( int const raw ) {
	this->Nbr = raw;
	return ;
}

int		Fixed::getRawBits( void ) const{
	return (this->Nbr);
}

std::ostream &operator<<( std::ostream &output, Fixed const &obj ) {
	output << obj.toFloat();
	return (output);
}

Fixed	&Fixed::operator=( Fixed const &obj ) {
	this->Nbr = obj.Nbr;
	return (*this);
}

Fixed	Fixed::operator>( Fixed const &obj ) const{
	return (this->toFloat() > obj.toFloat());
}
Fixed	Fixed::operator<( Fixed const &obj ) const{
	return (this->toFloat() < obj.toFloat());
}
Fixed	Fixed::operator<=( Fixed const &obj ) const{
	return (this->toFloat() <= obj.toFloat());
}
Fixed	Fixed::operator>=( Fixed const &obj ) const{
	return (this->toFloat() >= obj.toFloat());
}
Fixed	Fixed::operator==( Fixed const &obj ) const{
	return (this->toFloat() == obj.toFloat());
}
Fixed	Fixed::operator!=( Fixed const &obj ) const{
	return (this->toFloat() != obj.toFloat());
}

Fixed	Fixed::operator*( Fixed const &obj ) {
	return (this->toFloat() * obj.toFloat());
}
Fixed	Fixed::operator/( Fixed const &obj ) {
	return (this->toFloat() / obj.toFloat());
}
Fixed	Fixed::operator+( Fixed const &obj ) {
	return (this->toFloat() + obj.toFloat());
}
Fixed	Fixed::operator-( Fixed const &obj ) {
	return (this->toFloat() - obj.toFloat());
}


Fixed	Fixed::operator++( int ) {
	Fixed	clone = *this;
	++this->Nbr;
	return (clone);
}
Fixed	Fixed::operator++( void ) {
	++this->Nbr;
	return (*this);
}
Fixed	Fixed::operator--( int ) {
	Fixed	clone = *this;
	--this->Nbr;
	return (clone);
}
Fixed Fixed::operator--( void ) {
	--this->Nbr;
	return (*this);
}

const Fixed &Fixed::min( const Fixed &ref1, const Fixed &ref2 ) {
	if (ref1.toFloat() < ref2.toFloat())
		return (ref1);
	return (ref2);	
}

const Fixed &Fixed::max( const Fixed &ref1, const Fixed &ref2 ) {
	if (ref1.toFloat() > ref2.toFloat())
		return (ref1);
	return (ref2);
}

Fixed &Fixed::min( Fixed &ref1, Fixed &ref2 ) {
	if (ref1.toFloat() > ref2.toFloat())
		return (ref1);
	return (ref2);
}

Fixed &Fixed::max( Fixed &ref1, Fixed &ref2 ) {
	if (ref1.toFloat() > ref2.toFloat())
		return (ref1);
	return (ref2);
}
