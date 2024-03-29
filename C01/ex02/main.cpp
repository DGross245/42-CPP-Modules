/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:16:17 by dgross            #+#    #+#             */
/*   Updated: 2023/03/29 07:06:22 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main ( void )
{
	std::string name = "HI THIS IS BRAIN";
	std::string *stringPTR = &name;
	std::string &stringREF = name;

	std::cout << &name << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << name << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
