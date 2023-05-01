/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:35 by dna               #+#    #+#             */
/*   Updated: 2023/05/01 15:34:51 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"
#include <algorithm>
#include <map>

int main(int argc, char **argv)
{
	(void)argv;
	if (argc < 3)
		std::cerr << "Error : argument missing!" << std::endl;
	else if(argc > 3)
		std::cerr << "Error : Too many arguments!" << std::endl;
	
	return (0);
}


//map