/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:33:08 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 11:51:59 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat *b = new Bureaucrat();
	Bureaucrat *kevin = new Bureaucrat("tim", 20);
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
	Form f1;
	Form f2("lol", 24, 60);
	try
	{
		std::cout << "Creating Form with a too low GradeExec" << std::endl;
		Form f3("lol2", 2, 500);
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Bureaucrat B("Bur", 100);
	Bureaucrat C("Me", 8);
	try
	{
		B.signForm(f1);
		kevin->signForm(f1);
		B.signForm(f2);
		C.signForm(f1);
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		f1.beSigned(C);
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B.signForm(f1);
		kevin->signForm(f1);
		B.signForm(f2);
		C.signForm(f1);
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete b;
	delete kevin;
	return 0;
}