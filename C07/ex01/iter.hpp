/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:55:38 by dgross            #+#    #+#             */
/*   Updated: 2023/04/02 16:50:04 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_H

# define ITER_H

#include <string>

template<typename inter>
void Inter(inter *array,  std::size_t lenght, void (*pointer)(inter &function)) {
	int i;
	for (i = 0; i < lenght; i++)
		pointer(array[i]);
}

#endif