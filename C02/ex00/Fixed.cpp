/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:30:44 by dgross            #+#    #+#             */
/*   Updated: 2023/02/22 14:00:51 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::Bits = 8;

void	Fixed::setRawBits( int const raw ) {
	this->Nbr = raw;
	return ;
}

int		Fixed::getRawBits( void ) const{
	return (this->Nbr);
}

Fixed	&Fixed::operator=(Fixed const &obj) {
	this->Nbr = obj.Nbr;
	return (*this);
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