/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:01 by dna               #+#    #+#             */
/*   Updated: 2023/04/17 01:54:48 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _N(2) {
	return ;
}

Span::Span( unsigned int N ) : _N(N) {
	return ;
}

Span::Span( Span const &obj ) {
	*this = obj;
	return ;
}

Span::~Span( void ) {
	return ;
}

Span &Span::operator=( Span const &instance ) {
	return (*this);
}

void Span::addNumber( unsigned int nbr ) {
	return ;
}

void Span::shortestSpan( void ) const {
	return ;
}

void Span::longestSpan( void ) const {
	return ;
}