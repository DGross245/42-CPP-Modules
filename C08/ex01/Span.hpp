/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:06 by dna               #+#    #+#             */
/*   Updated: 2023/04/17 01:54:31 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

class Span {

public:
	
	Span( void );
	Span( unsigned int N );
	Span(Span const &obj);
	~Span( void );
	Span &operator=( Span const &instance );
	void addNumber( unsigned int nbr );
	void shortestSpan( void ) const;
	void longestSpan( void ) const;

private:

	unsigned int _N;
	
}

#endif