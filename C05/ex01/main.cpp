/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:33:08 by dgross            #+#    #+#             */
/*   Updated: 2023/03/17 13:29:40 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\033[1;32m** Constructing Bureaucrats **\033[0m" << std::endl;
	Bureaucrat *b = new Bureaucrat();
	Bureaucrat *kevin = new Bureaucrat("tim", 20);
	std::cout << "\033[1;32m** Testing Bureaucrats **\033[0m" << std::endl;
	std::cout << b;
	try
	{
	b->Increment();
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b;
	try
	{
		b->Decrement();
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b;
	try
	{
		while (1)
			b->Decrement();
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b;
	std::cout << "\033[1;32m** Constructing Formtests **\033[0m" << std::endl;
	Form f1;
	Form f2("lol", 24, 60);
	try
	{
		Form f3("lol2", 2, 500);
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Bureaucrat B("Bur", 100);
	std::cout << "\033[1;32m** Testing Forms **\033[0m" << std::endl;
	try
	{
		B.signForm(f1);
		kevin->signForm(f1);
		B.signForm(f2);
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\033[1;32m** Deconstructing **\033[0m" << std::endl;
	delete b;
	delete kevin;
	return 0;
}