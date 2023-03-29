/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:02:24 by dgross            #+#    #+#             */
/*   Updated: 2023/03/29 08:27:12 by dna              ###   ########.fr       */
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
	Fixed( void );
	Fixed( int const Integer );
	Fixed( float const Float );
	Fixed( Fixed const &instance );
	~Fixed( void );

private:

	int					Nbr;
	static const int	Bits;

};

std::ostream &operator<<( std::ostream &output, Fixed const &obj );

#endif