/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:28:55 by dna               #+#    #+#             */
/*   Updated: 2023/03/29 14:56:15 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WHATEVER_H

# define WHATEVER_H

template<typename whatever>
void swap(whatever &a, whatever &b) {
	whatever c;

	c = a;
	a = b;
	b = c;
}

template<typename whatever>
whatever min(whatever a, whatever b) {
	if (a < b)
		return (a);
	return (b);
}

template<typename whatever>
whatever max(whatever a, whatever b) {
	if (a > b)
		return (a);
	return (b);
}

#endif