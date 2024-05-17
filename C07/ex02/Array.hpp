/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:54:14 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:19:01 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

template<typename T>
class Array {

public:	

	Array( void ) : array( new T[0] ), _size(0) {
		return ;
	}
	Array( unsigned int n ) : array( new T[n] ), _size(n) {
		return ;
	}
	Array( Array const &obj ) : array(new T[obj._size] ), _size(obj._size) {
		for (unsigned int i = 0; i < _size; i++)
			array[i] = obj.array[i];
	}
	~Array() {
		delete this->array;
		return ;
	}
	Array &operator=( Array const &obj ) {
		if (this->array == NULL)
			delete this->array;
		this->array = new T[obj._size];
		this->_size = obj._size;
		for (unsigned int i = 0; i < _size; i++)
			array[i] = obj.array[i];
		return (*this);
	}

	T &operator[]( unsigned int const i ) const {
		if (i < 0 || i > _size - 1)
			throw std::out_of_range("**** Out of range! ****");
		return array[i];
	}
	size_t size() {
		return (this->_size);
	}

private:

	T *array;
	std::size_t _size;

};


#endif