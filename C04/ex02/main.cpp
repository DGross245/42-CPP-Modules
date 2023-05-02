/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:09:51 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 17:34:19 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>


int main()
{
	Animal *Array[10];
	//Animal test;
	for (int i = 0; i < 10; i++)
	{
			if (i % 2 == 0)
				Array[i] = new Cat();
			else
				Array[i] = new Dog();	
	}
	std::cout << "\nType and sound test\n" << std::endl;
	for(int i = 0; i < 10; i++) {
		std::cout << "-->" << Array[i]->getType() << " " << std::endl;
		std::cout << "Make a sound!" << std::endl;
		Array[i]->makeSound();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete Array[i];
	
	std::cout << "\nDeep copy test!" << std::endl;
	
	std::cout << "\nOriginal Cat" << std::endl;
	Cat *cat = new Cat();

	cat->setBrain(0, "I like running around in a cyrcle");
	cat->setBrain(1, "woof I dont know");
	cat->printBrain();

	std::cout << "\nNew Cat" << std::endl;
	Cat *new_cat = new Cat(*cat);

	new_cat->printBrain();
	
	std::cout << std::endl;
	delete cat;
	delete new_cat;
	return 0;
}
