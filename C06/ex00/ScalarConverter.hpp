/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:38:49 by dna               #+#    #+#             */
/*   Updated: 2023/04/28 11:09:31 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <string>

class ScalarConverter {

public:

	static int convert( std::string input );
	static void printChar( char Char );
	static void printInt( int Integer );
	static void printFloat( float Float );
	static void printDouble( double Double );
	static int checkInput( std::string input );
	static int signCheck( std::string input );
	static int dotCheck( std::string input );
	
private:

	~ScalarConverter( void );
	ScalarConverter( ScalarConverter const &obj );
	ScalarConverter &operator=( ScalarConverter const &obj );
	ScalarConverter( void );

};

#endif