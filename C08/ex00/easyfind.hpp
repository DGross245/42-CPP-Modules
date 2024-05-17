/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:51 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:19:26 by dgross           ###   ########.fr       */
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