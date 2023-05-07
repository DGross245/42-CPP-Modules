/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:35 by dna               #+#    #+#             */
/*   Updated: 2023/05/06 18:01:12 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"
#include <algorithm>
#include <map>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cerr << "Error : argument missing!" << std::endl;
	else if(argc > 2)
		std::cerr << "Error : Too many arguments!" << std::endl;
	else
		BitcoinExchange Database("data.csv", argv[1]);
	return (0);
}


//map