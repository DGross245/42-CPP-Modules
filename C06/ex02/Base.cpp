/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:53:59 by dna               #+#    #+#             */
/*   Updated: 2023/04/16 22:53:10 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base::Base( void ) {
	return ;
}

Base::~Base( void ) {
	return ;
}

Base * generate(void) {
	std::srand(std::time(0));
	Base *typ = NULL;

	int nbr = std::rand() % 3;

	if (nbr == 0)
		typ = new A();
	else if (nbr == 1)
		typ = new B();
	else if (nbr == 2)
		typ = new C();
	return (typ);
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "The derived class is A!" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "The derived class is B!" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "The derived class is C!" << std::endl;
	return ;
}

// void identify(Base& p) {
	
// 	return ;
// }

void identify(Base& p)
{
    unsigned long   address;

    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "This is A!" << std::endl;
        address =  reinterpret_cast<unsigned long>(&a);
    }
    catch (std::bad_cast& e) {
        try {
            B& b = dynamic_cast<B&>(p);
            std::cout << "This is B!" << std::endl;
            address =  reinterpret_cast<unsigned long>(&b);
        }
        catch (std::bad_cast& e) {
            try {
                C& c = dynamic_cast<C&>(p);
                std::cout << "This is C!" << std::endl;
                address = reinterpret_cast<unsigned long>(&c);
            }
            catch (std::bad_cast& e) {
                std::cout << "It has nothing to do with the base." << std::endl;
            }
        }
    }
    std::cout << std::hex << std::uppercase << address << std::endl;
}
