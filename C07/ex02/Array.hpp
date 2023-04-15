/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:54:14 by dna               #+#    #+#             */
/*   Updated: 2023/04/15 12:07:39 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ARRAY_H

# define ARRAY_H

template<typename T>
class Array {

public:	

	Array( void ) : array( new T[0] ), size(0) {
		return ;
	}
	Array( unsigned int n ) : array( new T[n] ), size(n) {
		return ;
	}
	Array( Array const &obj ) : array(new T[obj.size] ), size(obj.size) {
		for (unsigned int i = 0; i < size; i++)
			array[i] = obj.array[i];
	}
	~Array() {
		delete this->array;
		return ;
	}
	Array &operator=( Array const &obj ) {
		if (this->array == 0)
			delete this->array;
		this->array = new T[obj.size];
		this->size = obj.size;
		for (unsigned int i = 0; i < size; i++)
			array[i] = obj.array[i];
		return (*this);
	}


private:

	T *array;
	unsigned int size;

};


#endif