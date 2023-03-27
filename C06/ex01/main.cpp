/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:08:25 by dgross            #+#    #+#             */
/*   Updated: 2023/03/25 17:43:46 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <string>
#include <iostream>

int main (void)
{
	Data *Info_A = new Data( "its just a test!" );
	Serializer obj;
	uintptr_t ptr;
	Data *deserialized;

	ptr = obj.serialize( Info_A );
	deserialized = obj.deserialize( ptr );
	
	
  	std::cout << "ptr points to address: " << std::hex << ptr << std::endl;
  	std::cout << "deserialized points to address: " << std::hex << (unsigned long)deserialized << std::endl;
	if (Info_A != deserialized )
		std::cout << "not the same pointer " << std::endl;
	else
		std::cout << "same pointer " << std::endl;
	
	std::cout << "** this is a test to show the diff" << std::endl;
	
	deserialized = obj.deserialize( 42 );
	std::cout << "ptr points to address: " << std::hex << ptr << std::endl;
  	std::cout << "deserialized points to address: " << std::hex << (unsigned long)deserialized << std::endl;
	if (Info_A != deserialized )
		std::cout << "not the same pointer " << std::endl;
	else
		std::cout << "same pointer " << std::endl;
	
	delete Info_A;
	return (0);
}