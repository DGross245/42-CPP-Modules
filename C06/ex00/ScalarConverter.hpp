/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:38:49 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:16:27 by dgross           ###   ########.fr       */
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