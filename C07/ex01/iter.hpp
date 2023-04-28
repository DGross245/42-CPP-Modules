/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:55:38 by dgross            #+#    #+#             */
/*   Updated: 2023/04/28 14:18:46 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <string>
#include <iostream>

template<typename iter>
void Iter(iter *array,  std::size_t lenght, void (*pointer)(iter &array)) {
	std::size_t i;

	for (i = 0; i < lenght; i++)
		pointer(array[i]);
}
template<typename iter>
void print( iter array) {
	std::cout << array << std::endl;
}

#endif