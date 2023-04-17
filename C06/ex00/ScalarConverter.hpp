/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:38:49 by dna               #+#    #+#             */
/*   Updated: 2023/04/17 14:43:39 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <string>

class ScalarConverter {

public:

	ScalarConverter( std::string input );
	~ScalarConverter( void );
	ScalarConverter( ScalarConverter const &obj );
	ScalarConverter &operator=( ScalarConverter const &obj );
	static void convert( std::string input );
	static void toChar( std::string input );
	static void toInt( std::string input );
	static void toFloat( std::string input );
	static void toDouble( std::string input );
	
private:

	ScalarConverter( void );
	
};

#endif