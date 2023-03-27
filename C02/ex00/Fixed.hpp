/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:30:32 by dgross            #+#    #+#             */
/*   Updated: 2023/03/27 13:30:18 by dgross           ###   ########.fr       */
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