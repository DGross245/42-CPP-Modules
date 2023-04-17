/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:41:54 by dna               #+#    #+#             */
/*   Updated: 2023/04/17 14:44:11 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include "Data.hpp"

class Serializer {

public:
	Serializer( Serializer const &obj );
	~Serializer( void );
	Serializer &operator=( Serializer const &instance);
	static unsigned long serialize( Data *ptr );
	static Data *deserialize( unsigned long raw );
	
private:

	Serializer( void );

}; 

#endif