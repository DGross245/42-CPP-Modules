/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:09:51 by dgross            #+#    #+#             */
/*   Updated: 2023/04/13 23:58:20 by dgross           ###   ########.fr       */
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
	Animal *Array[10];

	for (int i = 0; i < 10; i++)
	{
			if (i % 2 == 0)
				Array[i] = new Cat();
			else
				Array[i] = new Dog();	
	}
	for (int i = 0; i < 10; i++)
		delete Array[i];
	return 0;
}
