/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:41:54 by dna               #+#    #+#             */
/*   Updated: 2023/04/28 11:16:01 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include "Data.hpp"
# include <stdint.h>

class Serializer {

public:
	static uintptr_t serialize( Data *ptr );
	static Data *deserialize( uintptr_t raw );
	
private:

	Serializer( Serializer const &obj );
	~Serializer( void );
	Serializer &operator=( Serializer const &instance);
	Serializer( void );

}; 

#endif