/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:50:37 by dgross            #+#    #+#             */
/*   Updated: 2023/04/23 08:56:37 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main (void)
{
	std::cout << "\n\033[34mTesting\033[0m\n" << std::endl;
	{
		std::cout << "\n\033[34mPresidential Pardon Form\033[0m\n" << std::endl;
		Intern Michael;
		Bureaucrat Kevin("Kevin", 2);
		AForm *A = Michael.makeForm("PresidentialPardonForm", "AyAyron");

		try
		{
			Kevin.signForm(*A);
			Kevin.executeForm(*A);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		std::cout << A << std::endl;
		delete A;
	}
	{
		std::cout << "\n\033[34mRoboto my Request Form\033[0m\n" << std::endl;
		Intern HAL;
		Bureaucrat AyAyron("AyAyron", 4);
		AForm *B = HAL.makeForm("RobotomyRequestForm", "coffee machine");
	
		try
		{
			AyAyron.signForm(*B);
			AyAyron.executeForm(*B);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		std::cout << B << std::endl;
		delete B;
	}
	{
		std::cout << "\n\033[34mShrubbery Creation Form\033[0m\n" << std::endl;
		Intern Deenice;
		Bureaucrat Bob("Bob", 6);
		AForm *C = Deenice.makeForm("ShrubberyCreationForm", "Home");
	
		try
		{
			Bob.signForm(*C);
			Bob.executeForm(*C);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		std::cout << C << std::endl;
		delete C;
	}
	{
		std::cout << "\n\033[34mIntern fail test\033[0m\n" << std::endl;
		Intern Klaus;
		Bureaucrat Ghost("Ghost", 150);
		AForm *D;
	
		try
		{
			D = Klaus.makeForm("DoesntExist", "NoOne");
			Ghost.signForm(*D);
			Ghost.executeForm(*D);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}