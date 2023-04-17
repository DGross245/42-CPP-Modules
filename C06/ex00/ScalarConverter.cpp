/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:38:51 by dna               #+#    #+#             */
/*   Updated: 2023/04/16 17:44:49 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <string>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <climits>

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
	toChar( input );
	toInt( input );
	toFloat( input );
	toDouble( input );
	return ;
}

void ScalarConverter::toChar( std::string input ) {
    char			*endptr;
	char			Character;
    const long long int_value = std::strtoll(input.c_str(), &endptr, 10);

    if (endptr == input.c_str())
	{
        std::cout << "char : impossible" << std::endl;
		return ;
	}
	else if (int_value > INT_MAX || int_value < INT_MIN)
		std::cout << "int : impossible"  << std::endl;
	Character = static_cast<char>(int_value);
	if (int_value > 127 || int_value < 0)
		std::cout << "char : impossible"  << std::endl;
	else if (!std::isprint( int_value ))
		std::cout << "char : Non displayable"  << std::endl;
	else	
		std::cout << "char : '" << Character << "'" << std::endl;
	return ;
}

void ScalarConverter::toInt( std::string input ) {
    char			*endptr;
    const long long int_value = std::strtoll(input.c_str(), &endptr, 10);

    if (endptr == input.c_str())
        std::cout << "int : impossible" << std::endl;
	else if (int_value > INT_MAX || int_value < INT_MIN)
		std::cout << "int : impossible"  << std::endl;
	else
		std::cout << "int : " << int_value << std::endl;
	return ;
}

void ScalarConverter::toFloat( std::string input ) {
	float	Float;

	Float = std::atof(input.c_str());
	std::cout << "float : " << std::fixed << std::setprecision(1) << Float << "f" << std::endl;
	return ;
}

void ScalarConverter::toDouble( std::string input ) {
	double	Double;

	Double = std::strtod(input.c_str(), NULL); 
	std::cout << "double : " << Double << std::endl;
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const &obj) {
	*this = obj;
	return ;
}

ScalarConverter &ScalarConverter::operator=( ScalarConverter const &instance) {
	(void)instance;
	return (*this);
}
