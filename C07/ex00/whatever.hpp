/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:28:55 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:18:43 by dgross           ###   ########.fr       */
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