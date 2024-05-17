/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:50:37 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:14:59 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main(void)
{
	std::cout << "\n\033[34mTesting\033[0m\n" << std::endl;
	{
		std::cout << "\n\033[34mPresidential Pardon Form\033[0m\n" << std::endl;
		// AForm test;
		Bureaucrat A("Jayquellin", 5);
		Bureaucrat B("AyAyron", 150);
		PresidentialPardonForm form1("AyAyron");
		PresidentialPardonForm form2("ohshayhenny");
		PresidentialPardonForm form3;
	
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
	
		try
		{
			A.signForm(form1);
			A.signForm(form2);
			B.signForm(form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			A.executeForm(form1);
			A.executeForm(form2);
			B.executeForm(form2);
			B.executeForm(form3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\033[34mRoboto my Request Form\033[0m\n" << std::endl;
		Bureaucrat A("HEL", 5);
		Bureaucrat B("GPT", 150);
		RobotomyRequestForm form1("GLaDOS");
		RobotomyRequestForm form2("P-body");
		RobotomyRequestForm form3;
		
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
	
		try
		{
			A.signForm(form1);
			A.signForm(form2);
			B.signForm(form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			A.executeForm(form1);
			A.executeForm(form2);
			B.executeForm(form2);
			B.executeForm(form3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\033[34mShrubbery Creation Form\033[0m\n" << std::endl;
		Bureaucrat A("Kevin", 5);
		Bureaucrat B("Klaus", 150);
		ShrubberyCreationForm form1("Home");
		ShrubberyCreationForm form2("Garden");
		ShrubberyCreationForm form3;
		
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
	
		try
		{
			A.signForm(form1);
			A.signForm(form2);
			B.signForm(form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			A.executeForm(form1);
			A.executeForm(form2);
			B.executeForm(form2);
			B.executeForm(form3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}