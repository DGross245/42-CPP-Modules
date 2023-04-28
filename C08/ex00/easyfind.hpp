/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:51 by dna               #+#    #+#             */
/*   Updated: 2023/04/28 17:15:15 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include <iostream>
#include <algorithm>

template<typename T>
int easyfind( T const &container , const int searchValue ) {
	typename T::const_iterator Interator;

	Interator = std::find(container.begin(), container.end(), searchValue);
	if (Interator != container.end())
		return (std::distance(container.begin(), Interator));
	else
	{
		std::cerr << "Given number is not in the container!" << std::endl;
		return (-1);
	}
}

#endif