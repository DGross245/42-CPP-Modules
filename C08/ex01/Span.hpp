/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:06 by dna               #+#    #+#             */
/*   Updated: 2023/04/28 18:44:36 by dna              ###   ########.fr       */
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
	
private:

	Span( void );
	unsigned int getN( void );
	std::vector<int> &getContainer( void );

	std::vector<int> _container;
	unsigned int _N;
	
};

#endif