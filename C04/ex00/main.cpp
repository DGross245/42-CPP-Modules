/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:09:51 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:12:21 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal *meta = new Animal();
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << "Make a sound!" << std::endl;
	meta->makeSound();
	
	delete meta;
	
	const Animal *j = new Dog();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << "Make a sound!" << std::endl;
	j->makeSound();

	delete j;
	
	const Animal *i = new Cat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << "Make a sound!" << std::endl;
	i->makeSound();

	delete i;

	const WrongAnimal *Car	= new WrongAnimal();

	std::cout << Car->getType() << " " << std::endl;
	std::cout << "Make a sound!" << std::endl;
	Car->makeSound();

	delete Car;

	const WrongAnimal *imposter = new WrongCat();

	std::cout << imposter->getType() << " " << std::endl;
	std::cout << "Make a sound!" << std::endl;
	imposter->makeSound();

	delete imposter;

	return (0);
}
