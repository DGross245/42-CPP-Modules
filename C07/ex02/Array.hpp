/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:54:14 by dna               #+#    #+#             */
/*   Updated: 2023/04/02 17:17:50 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ARRAY_H

# define ARRAY_H

template<typename T>
class Array {

public:	

	Array( void ) : array( new T[0] ) {
		
	}
	Array( unsigned int n ) {
		this->array = new T[n];
	}
	Array( Array const &obj ) {
		
	}
	Array();
	Array &operator=( Array const &obj );


private:

	T *array;
	// std::size_t lenght;

};

#endif