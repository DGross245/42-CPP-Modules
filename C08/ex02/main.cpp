/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:31 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:20:11 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main ( void ) {

	{
		MutantStack<int> mystack;
	
		std::cout << "### TESTING PUSH FUNCTION OF STACK ### " << std::endl;
	
		srand(time(0));
		for (int i = 0; i < 5; i++)
		{
			const int value = rand() % 10;
			mystack.push(value);
			std::cout << "pushing : " << value << std::endl;
		}
		
		std::cout << "size : " << mystack.size() << std::endl;
		
		std::cout << "pop the number: " << mystack.top() << std::endl;
		mystack.pop(); 
		
		std::cout << "new size : " << mystack.size() << std::endl;
	}
	{
		std::cout << "### TESTING THE ITERATORS ### " << std::endl;
		MutantStack<int> iteratorStack;

		srand(time(0));
		for (int i = 0; i < 5; i++)
		{
			const int value = rand() % 5;
			iteratorStack.push(value);
			std::cout << "pushing : " << value << std::endl;
		}
		MutantStack<int>::iterator iter = iteratorStack.begin();
		MutantStack<int>::iterator iterEnd = iteratorStack.end();
	
		for (; iter != iterEnd; iter++) {
			std::cout << *iter << std::endl;
		}
	}
	{
		std::cout << "### TESTING NUMBERS FOR CMP STACK ### " << std::endl;
		MutantStack<int> mystack;

		mystack.push(9);
		mystack.push(44);
		std::cout << mystack.top() << std::endl;
		mystack.pop();
		std::cout << mystack.size() << std::endl;
		mystack.push(4);
		mystack.push(5);
		mystack.push(98);
		mystack.push(7);
	
		MutantStack<int>::iterator iter = mystack.begin();
		MutantStack<int>::iterator iterEnd = mystack.end();

		for (; iter != iterEnd; iter++) {
			std::cout << *iter << std::endl;
		}
	}
	{
		std::cout << "### TESTING NUMBERS FOR CMP LIST ### " << std::endl;
		std::list<int> mylist;

		mylist.push_back(9);
		mylist.push_back(44);
		std::cout << mylist.back() << std::endl;
		mylist.pop_back();
		std::cout << mylist.size() << std::endl;
		mylist.push_back(4);
		mylist.push_back(5);
		mylist.push_back(98);
		mylist.push_back(7);

		std::list<int>::iterator iter = mylist.begin();
		std::list<int>::iterator iterEnd = mylist.end();

		for (; iter != iterEnd; iter++) {
			std::cout << *iter << std::endl;
		}
	}
	return (0);
}