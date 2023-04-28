/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:08:20 by dgross            #+#    #+#             */
/*   Updated: 2023/04/28 10:35:33 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main (int argc, char **argv) {
	if (argc < 2)
	{
		std::cout << "Error : need atleast 1 argument" << std::endl;
		return (1);
	}
	if (argc > 2)
	{
		std::cout << "Error : to many arguments" << std::endl;
		return (1);
	}
	if (ScalarConverter::convert(argv[1]))
		return (1);
	return (0);
}