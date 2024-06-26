/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:06 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:20:04 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <exception>
# include <vector>
# include <algorithm>

class Span {

public:
	
	Span( unsigned int N );
	Span(Span const &obj);
	~Span( void );
	Span &operator=( Span const &instance );

	
	void addNumber( unsigned int nbr );
	void addNumbers( std::vector<int>::iterator Start, std::vector<int>::iterator End);
	int shortestSpan( void );
	int longestSpan( void );

	class ContainerFullException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class ContainerEmptyException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class TooFewElementsException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class RangeTooBigException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	
private:

	std::vector<int> &getContainer( void );
	Span( void );
	unsigned int getN( void );

	std::vector<int> _container;
	unsigned int _N;
	
};

#endif