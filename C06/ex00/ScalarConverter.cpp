/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:38:51 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:16:19 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

int ScalarConverter::convert( std::string input) {
	if (input.empty()) {
		std::cerr << "Underflow!" << std::endl;
		return (1);
	}
		
	int special = checkInput(input);

	if (special == 1)
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
		return (1);
	}
	else if (special == 2)
		return (0);
	else if (input.length() == 1 && !isdigit(input[0])) {
		char Char = static_cast<char>(input[0]);
		printChar( Char) ;
		printInt( static_cast<int>(Char) );
		printFloat( static_cast<float>(Char));
		printDouble( static_cast<double>(Char));
	}
	else if (input.find_first_not_of("+-0123456789") == std::string::npos && signCheck(input)) {
		int Integer = static_cast<int>( strtod(input.c_str(), NULL) );
		int OverflowCheck;

		std::stringstream ss(input);
		ss >> OverflowCheck;
		if (ss.fail() || !ss.eof())
		{
			std::cerr << "Overflow !" << std::endl;
			return (1);
		}
		if (Integer < 0 || Integer > 127)
			std::cout << "char: impossible" << std::endl;
		else
			printChar( static_cast<char>( Integer) );
		std::cout << "int: " << Integer << std::endl;
		printFloat( static_cast<float>( Integer ) );
		printDouble( static_cast<double>( Integer ));
	}
	else if (input.find_first_not_of("+-.f0123456789") == std::string::npos && input.find_first_of("f") == input.length() - 1 && isdigit(input[input.length() - 2]) && dotCheck(input) && signCheck(input))  {
		float Float = static_cast<float>(strtof(input.c_str(), NULL));

		if (Float < 0 || Float > 127)
			std::cout << "char: impossible" << std::endl;
		else
			printChar( static_cast<char>( Float ) );
		if (Float > std::numeric_limits<int>::max() || Float < std::numeric_limits<int>::min())
			std::cout << "int: impossible" << std::endl;
		else
			printInt( static_cast<int>( Float ));
		printFloat( Float );
		printDouble( static_cast<double>( Float) );
	}
	else if (input.find_first_not_of("+-.0123456789") == std::string::npos && isdigit(input[input.length() - 1]) && dotCheck(input) && signCheck(input)) {
		double Double = static_cast<double>(strtod(input.c_str(), NULL));

		if (Double < 0 || Double > 127)
			std::cout << "char: impossible" << std::endl;
		else
			printChar( static_cast<char>( Double ) );
		if (Double > std::numeric_limits<int>::max() || Double < std::numeric_limits<int>::min())
			std::cout << "int: impossible" << std::endl;
		else
			printInt( static_cast<int>( Double ) );
		printFloat( static_cast<float>( Double ) );
		printDouble( Double );
	}
	else
	{
		std::cerr << "Wrong input" << std::endl;
		return (1);
	}
	return (0);
}

int ScalarConverter::signCheck( std::string input ) {
	int		i = -1;

	if (input[++i] == '+' || input[i] == '-' ) {
		if (!isdigit(input[++i]))
			return (0);
	}
	else 
	{
		if (!isdigit(input[i]))
			return (0);	
	}
	for (; input[i]; i++) {
		if (input[i] == '+' || input[i] == '-') {
				return (0);
		}
	}
	return (1);
}

int ScalarConverter::dotCheck( std::string input ) {
	if (input.find('.') == std::string::npos)
		return (0);
	else if (input.find('.') != input.rfind('.'))
		return (0);
	else if (input[0] != '.' && isdigit(input[input.find('.') + 1]))
		return (1);
	return (0);
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
			return (2);
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
			return (2);
		}
	}
	return (0);
}

void ScalarConverter::printChar( char Char ) {

	if (!isprint(Char))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << Char << "'" << std::endl;
	return ;
}

void  ScalarConverter::printInt( int Integer) {
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

ScalarConverter::ScalarConverter( void ) {
	return ;
}

ScalarConverter::~ScalarConverter( void ) {
	return ;
}