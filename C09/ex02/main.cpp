/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:41 by dna               #+#    #+#             */
/*   Updated: 2023/05/16 11:14:04 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cerr << "Error: too few" << std::endl;
	else if (argc > 3100)
		std::cerr << "Error: too many" << std::endl;
	else {
		try
		{
			PmergeMe::Sort(argc, argv);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
