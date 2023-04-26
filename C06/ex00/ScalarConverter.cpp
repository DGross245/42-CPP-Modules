/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:38:51 by dna               #+#    #+#             */
/*   Updated: 2023/04/26 10:53:23 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <string>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <climits>
#include <float.h>
#include <cmath>
#include <cerrno>
#include <limits>

ScalarConverter::ScalarConverter( void ) {
	return ;
}

ScalarConverter::ScalarConverter( std::string input ) {
	convert(input);
	return ;
}

ScalarConverter::~ScalarConverter( void ) {
	return ;
}

void ScalarConverter::convert( std::string input) {
	if (checkInput(input))
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
	else if (input.length() == 1 && !isdigit(input[0])) {
		char Char = static_cast<char>(input[0]);
		printChar( Char) ;
		printInt( static_cast<int>(Char));
		printFloat( static_cast<float>(Char));
		printDouble( static_cast<double>(Char));
	}
	else if (input.find_first_not_of("+-0123456789") == std::string::npos) {
		int Integer = static_cast<int>( strtod(input.c_str(), NULL) );
		if (Integer < 0 || Integer > 127)
			std::cout << "char: impossible" << std::endl;
		else
			printChar( static_cast<char>( Integer) );
		printInt( Integer );
		printFloat( static_cast<float>( Integer ) );
		printDouble( static_cast<double>( Integer ));
	}
	std::size_t pos = input.find_first_not_of("+-.f0123456789");
	std::size_t unique = input.find_first_of(".");
	if ( pos == std::string::npos && input.find_first_of("f") == input.length() - 1 && unique != input.length() - 2 && unique != std::string::npos && unique > 0) {
		float Float = static_cast<float>(strtof(input.c_str(), NULL));
		if (Float < 0 || Float > 127)
			std::cout << "char: impossible" << std::endl;
		else
			printChar( static_cast<char>( Float ) );
		printInt( static_cast<int>( Float ) );
		printFloat( Float );
		printDouble( static_cast<double>( Float) );
	}
	else if (input.find_first_not_of("+-.0123456") == std::string::npos && unique != std::string::npos && unique != input.length() - 1 && unique > 0) {
		double Double = static_cast<double>(strtod(input.c_str(), NULL));
		if (Double < 0 || Double > 127)
			std::cout << "char: impossible" << std::endl;
		else
			printChar( static_cast<char>( Double ) );
		printInt( static_cast<int>( Double ) );
		printFloat( static_cast<float>( Double ) );
		printDouble( Double );
	}
	return ;
}

int ScalarConverter::checkInput( std::string input ) {
	std::string nanComp[2] = { "nan", "nanf" };
	std::string infComp[6] = { "-inf", "-inff", "+inf", "+inff", "inf", "inff" };
	int i = -1;

	while (++i < 2)
	{
		if (nanComp[i] == input)
		{
			std::cout << "char: impossible" << std::endl
					  << "int: impossible" << std::endl
					  << "float: nanf" << std::endl
					  << "double: nan" << std::endl;
			return (0);
		}
	}
	i = -1;
	while (++i < 6)
	{
		if (infComp[i] == input)
		{
			std::cout << "char: impossible" << std::endl
					  << "int: impossible" << std::endl;
			printFloat(static_cast<float>(strtof(input.c_str(), NULL)));
			printDouble(static_cast<double>(strtod(input.c_str(), NULL)));
			return (0);
		}
	}
	if (atoi(input.c_str()) == 0)
		return (1);
	return (0);
}

void ScalarConverter::printChar( char Char ) {

	if (!isprint(Char))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << Char << "'" << std::endl;
	return ;
}

void ScalarConverter::printInt( int Integer ) {
	
	std::cout << "int: " << Integer << std::endl;
	return ;
}

void ScalarConverter::printFloat( float Float ) {
	if (std::isnan(Float))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << Float << "f" << std::endl;
	return ;
}

void ScalarConverter::printDouble( double Double ) {
	if (std::isnan(Double))
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << Double << std::endl;
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const &obj) {
	*this = obj;
	return ;
}

ScalarConverter &ScalarConverter::operator=( ScalarConverter const &instance) {
	if (this == &instance)
		return (*this);
	return (*this);
}
