/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:55:29 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:10:07 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

public:

	Fixed( void );
	Fixed( Fixed const &instance );
	Fixed &operator=( Fixed const &obj );
	~Fixed( void );
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed operator>( Fixed const &obj ) const;
	Fixed operator<( Fixed const &obj ) const;
	Fixed operator>=( Fixed const &obj ) const;
	Fixed operator<=( Fixed const &obj ) const;
	Fixed operator==( Fixed const &obj ) const;
	Fixed operator!=( Fixed const &obj ) const;
	Fixed operator+( Fixed const &obj );
	Fixed operator*( Fixed const &obj );
	Fixed operator-( Fixed const &obj );
	Fixed operator/( Fixed const &obj );
	Fixed operator++( int );
	Fixed operator++( void );
	Fixed operator--( int );
	Fixed operator--( void );
	Fixed( int const Integer );
	Fixed( float const Float );
	static const Fixed &min( const Fixed &ref1, const Fixed &ref2 );
	static const Fixed &max( const Fixed &ref1, const Fixed &ref2 );
	static Fixed &min( Fixed &ref1, Fixed &ref2 );
	static Fixed &max( Fixed &ref1, Fixed &ref2 );

private:

	int					Nbr;
	static const int	Bits;

};

std::ostream &operator<<( std::ostream &output, Fixed const &obj );

#endif