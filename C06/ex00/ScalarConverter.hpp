/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:38:49 by dna               #+#    #+#             */
/*   Updated: 2023/04/26 12:59:08 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <string>

class ScalarConverter {

public:

	~ScalarConverter( void );
	ScalarConverter( ScalarConverter const &obj );
	ScalarConverter &operator=( ScalarConverter const &obj );
	static int convert( std::string input );
	static void printChar( char Char );
	static void printInt( int Integer );
	static void printFloat( float Float );
	static void printDouble( double Double );
	static int checkInput( std::string input );

private:

	ScalarConverter( std::string input );
	ScalarConverter( void );

};

#endif