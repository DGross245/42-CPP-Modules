/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:53:59 by dna               #+#    #+#             */
/*   Updated: 2023/03/25 18:35:41 by dna              ###   ########.fr       */
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
	Base *typ;

	int nbr = std::rand() % 3;

	if (nbr == 0)
		typ = new A();
	else if (nbr == 1)
		typ = new B();
	else if (nbr == 2);
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

void identify(Base& p) {
	
	return ;
}