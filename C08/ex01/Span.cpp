/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:01 by dna               #+#    #+#             */
/*   Updated: 2023/04/28 18:49:22 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <algorithm>

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
	this->_N = instance._N;
	return (*this);
}

void Span::addNumber( unsigned int nbr ) {
	if (this->getContainer().size() == this->getN())
		throw ContainerFullException();
	this->getContainer().push_back(nbr);
	return ;
}

int Span::shortestSpan( void ) {
	std::size_t Size = this->getContainer().size();
	if (Size == 0)
		throw ContainerEmptyException();
	else if (Size == 1)
		throw TooFewElementsException();
	else
	{
		std::vector<int> sorted = this->getContainer();
		std::sort(sorted.begin(), sorted.end());
		
		return (3);
	}
}

int Span::longestSpan( void ) {
	std::size_t Size = this->getContainer().size();
	if (Size == 0)
		throw ContainerEmptyException();
	else if (Size == 1)
		throw TooFewElementsException();
	else
	{
		std::vector<int> sorted = this->getContainer();
		std::sort(sorted.begin(), sorted.end(), std::greater<int>());
		return (sorted.front() - sorted.back());
	}
}

unsigned int Span::getN( void ) {
	return (this->_N);
}

std::vector<int> &Span::getContainer( void ) {
	return (this->_container);
}

const char *Span::ContainerFullException::what() const throw() { return ("Container is too Full!");}
const char *Span::ContainerEmptyException::what() const throw() { return ("Container is Empty!");}
const char *Span::TooFewElementsException::what() const throw() { return ("Container need more Elements!");}