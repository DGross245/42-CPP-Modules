/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:17 by dna               #+#    #+#             */
/*   Updated: 2023/04/17 01:31:23 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"
#include <iostream>


int main(void)
{
	std::vector<int> container;
	container.push_back(1);	
	container.push_back(5);
	container.push_back(13);
	container.push_back(88);
	container.push_back(189);
	container.push_back(1239);
	container.push_back(938);
	container.push_back(3132);

	std::cout << easyfind(container, 5) << std::endl;
	std::cout << easyfind(container, 1) << std::endl;
	std::cout << easyfind(container, 3) << std::endl;
	std::cout << easyfind(container, 84) << std::endl;
	std::cout << easyfind(container, 3132) << std::endl;
	std::cout << easyfind(container, 938) << std::endl;

	return (0);
}