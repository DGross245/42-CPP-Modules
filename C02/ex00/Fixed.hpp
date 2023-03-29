/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:30:32 by dgross            #+#    #+#             */
/*   Updated: 2023/03/29 08:26:15 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_H
# define FIXED_H

class Fixed {

public:

	Fixed &operator=( Fixed const &obj);
	Fixed( void );
	Fixed( Fixed const &instance );
	~Fixed( void );
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:

	int					Nbr;
	static const int	Bits;

};

#endif