/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:38 by dna               #+#    #+#             */
/*   Updated: 2023/05/07 10:22:19 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cerr << "Error: Too few arguments!" << std::endl;
	else if (argc > 2)
		std::cerr << "Error: Too many arguments!" << std::endl;
	else {
		try
		{
			RPN::calculator(argv[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}

//stack