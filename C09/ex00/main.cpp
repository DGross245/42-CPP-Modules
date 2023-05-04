/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:35 by dna               #+#    #+#             */
/*   Updated: 2023/05/02 23:10:12 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"
#include <algorithm>
#include <map>

int main(int argc, char **argv)
{
	if (argc < 3)
		std::cerr << "Error : argument missing!" << std::endl;
	else if(argc > 3)
		std::cerr << "Error : Too many arguments!" << std::endl;
	else
		BitcoinExchange Database(argv[1], argv[2]);
	return (0);
}


//map