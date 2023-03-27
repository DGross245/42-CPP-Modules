/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:41:54 by dna               #+#    #+#             */
/*   Updated: 2023/03/27 13:36:07 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include "Data.hpp"

class Serializer {

public:
	Serializer( void );
	Serializer( Serializer const &obj );
	~Serializer( void );
	Serializer &operator=( Serializer const &instance);
	static uintptr_t serialize( Data *ptr );
	static Data *deserialize( uintptr_t raw );
	
private:

}; 

#endif