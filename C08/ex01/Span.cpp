/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:01 by dna               #+#    #+#             */
/*   Updated: 2023/04/30 13:53:50 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <iostream>

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
	this->_container = instance._container;
	return (*this);
}

void Span::addNumber( unsigned int nbr ) {
	if (this->getContainer().size() == this->getN())
		throw ContainerFullException();
	this->getContainer().push_back(nbr);
	return ;
}

void Span::addNumbers( std::vector<int>::iterator start, std::vector<int>::iterator end) {
	std::size_t Size = this->getContainer().size();

	if (Size == this->getN())
		throw ContainerFullException();
	if (Size + (end - start) > this->getN())
		throw RangeTooBigException();
	this->getContainer().insert(this->getContainer().begin(), start, end);
	return ;
}

int Span::shortestSpan( void ) {
	std::size_t Size = this->getContainer().size();
	int shortest = 0;

	if (Size == 0)
		throw ContainerEmptyException();
	else if (Size == 1)
		throw TooFewElementsException();
	else
	{
		std::vector<int> sorted = this->getContainer();
		std::sort(sorted.begin(), sorted.end());
		std::vector<int>::iterator cur = sorted.begin();
		std::vector<int>::iterator next = cur + 1;
		std::vector<int>::iterator End = sorted.end();

		for (shortest = *next - *cur; next != End; cur++, next++) {
			if (*next - *cur < shortest ) {
				shortest = *next - *cur;
			}
		}
		return (shortest);
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
const char *Span::RangeTooBigException::what() const throw() { return ("Range is too big for the Container!");}
