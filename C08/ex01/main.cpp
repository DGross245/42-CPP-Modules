/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:09:27 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:19:49 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

#define MAX_VAL 20000
int main()
{
	{
		Span A(10);
	
		A.addNumber(6);
		A.addNumber(3);
		A.addNumber(17);
		A.addNumber(9);
		A.addNumber(11);

		std::cout << A.shortestSpan() << std::endl;
		std::cout << A.longestSpan() << std::endl;
	}
	{
		Span B(MAX_VAL);

		srand(time(0));
		for (int i = 0; i < MAX_VAL; i++)
			B.addNumber(rand());

		Span Assign = B;
		Span Copy(B);
	
		std::cout << Assign.shortestSpan() << " = " << Copy.shortestSpan() << " = " << B.shortestSpan() << std::endl;
		std::cout << Assign.longestSpan() << " = " << Copy.longestSpan() << " = " << B.longestSpan() << std::endl;
		
	}
	{
		Span C(10);

		C.addNumber(42);
		C.addNumber(5);
		C.addNumber(184);
		C.addNumber(24);
		C.addNumber(18);

		
		Span Assign = C;
		Span Copy(C);
	
		std::cout << Assign.shortestSpan() << " = " << Copy.shortestSpan() << " = " << C.shortestSpan() << std::endl;
		std::cout << Assign.longestSpan() << " = " << Copy.longestSpan() << " = " << C.longestSpan() << std::endl;
	}
	{
		Span D(1);
		Span E(0);
		try
		{
			D.addNumber(2);
			D.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			E.addNumber(2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			E.shortestSpan();
			E.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Span F(MAX_VAL);
	
		std::vector<int> Viktor;
	
		Viktor.push_back(8);
		Viktor.push_back(10);
		Viktor.push_back(13);
		Viktor.push_back(73);
		Viktor.push_back(0);
	
		F.addNumber(1);
		F.addNumber(3);
		F.addNumber(6);
		std::cout << F.shortestSpan() << std::endl;
		std::cout << F.longestSpan() << std::endl;
		F.addNumbers(Viktor.begin(), Viktor.end());
		std::cout << "Adding more numbers" << std::endl;
		std::cout << F.shortestSpan() << std::endl;
		std::cout << F.longestSpan() << std::endl;
		try
		{
			Span G(7);
			G.addNumber(1);
			G.addNumber(3);
			G.addNumber(6);
			G.addNumbers(Viktor.begin(), Viktor.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0; 
}