/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:28:55 by dna               #+#    #+#             */
/*   Updated: 2023/04/28 14:08:25 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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