/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:55:29 by dgross            #+#    #+#             */
/*   Updated: 2023/03/27 13:30:34 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

public:

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed &operator=( Fixed const &obj );
	Fixed operator>( Fixed const &obj ) const;
	Fixed operator<( Fixed const &obj ) const;
	Fixed operator>=( Fixed const &obj ) const;
	Fixed operator<=( Fixed const &obj ) const;
	Fixed operator==( Fixed const &obj ) const;
	Fixed operator!=( Fixed const &obj ) const;
	Fixed &operator+( Fixed const &obj );
	Fixed &operator*( Fixed const &obj );
	Fixed &operator-( Fixed const &obj );
	Fixed &operator/( Fixed const &obj );
	Fixed &operator++( int );
	Fixed &operator++( void );
	Fixed &operator--( int );
	Fixed &operator--( void );
	Fixed( void );
	Fixed( int const Integer );
	Fixed( float const Float );
	Fixed( Fixed const &instance );
	~Fixed( void );
	static Fixed &min( const Fixed &ref1, const Fixed &ref2 );
	static Fixed &max( const Fixed &ref1, const Fixed &ref2 );
	static Fixed &min( Fixed &ref1, Fixed &ref2 );
	static Fixed &max( Fixed &ref1, Fixed &ref2 );

private:

	int					Nbr;
	static const int	Bits;

};

std::ostream &operator<<( std::ostream &output, Fixed const &obj );

#endif