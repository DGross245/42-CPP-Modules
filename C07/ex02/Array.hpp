/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:54:14 by dna               #+#    #+#             */
/*   Updated: 2023/04/09 21:37:01 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ARRAY_H

# define ARRAY_H

template<typename T>
class Array {

public:	

	Array( void ) : array( new T[0] ) {
		return ;
	}
	Array( unsigned int n ) {
		this->array = new T[n];
		return ;
	}
	Array( Array const &obj ) {
		
	}
	~Array() {
		return ;
	}
	Array &operator=( Array const &obj ) {
		if (this->array == 0)
			delete
		return (*this);
	}


private:

	T *array;
	// std::size_t lenght;

};

#endif