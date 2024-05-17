/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:08:25 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:17:06 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <string>
#include <iostream>
#include <stdint.h>

int main (void)
{
	Data *Info_A = new Data( "its just a test!" );
	uintptr_t serialized;
	Data *deserialized;

	std::cout << "Info_A information: " << *Info_A << std::endl; 

	serialized = Serializer::serialize( Info_A );
	deserialized = Serializer::deserialize( serialized );
	
  	std::cout << "serialized inforamtion: " << std::hex << serialized << std::endl;
  	std::cout << "deserialized information: " << std::hex << deserialized << std::endl;

	if (Info_A == deserialized )
		std::cout << "They are the same!" << std::endl;
	else
		std::cout << "They are not the same! " << std::endl;
	
	delete Info_A;
	return (0);
}