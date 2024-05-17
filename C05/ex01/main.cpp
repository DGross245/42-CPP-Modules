/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:33:08 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:14:28 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		std::cout << "/////////\033[32mTESTING CREATION LIMITS\033[0m/////////" << std::endl;
		std::cout << "----------------\033[37mGradeExec\033[0m-------------------\n" << std::endl;
		std::cout << "\033[34mCreating Form with a too low GradeExec...\033[0m" << std::endl;
		try
		{
			Form Form3("Master-Form2", 2, 500);
		}
		catch(Form::GradeTooLowException &e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m\n" << std::endl;
		}
		std::cout << "\033[34mCreating Form with a too high GradeExec...\033[0m" << std::endl;
		try
		{
			Form Form3("Master-Form2", 2, -1);
		}
		catch(Form::GradeTooHighException &e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m\n" << std::endl;
		}
		std::cout << "----------------\033[37mGradeSign\033[0m-------------------\n" << std::endl;
		std::cout << "\n\033[34mCreating Form with a too low GradeSign...\033[0m" << std::endl;
		try
		{
			Form Form3("Master-Form2", 400, 30);
		}
		catch(Form::GradeTooLowException &e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m\n" << std::endl;
		}
		std::cout << "\033[34mCreating Form with a too high GradeSign...\033[0m" << std::endl;
		try
		{
			Form Form3("Master-Form2", 0, 30);
		}
		catch(Form::GradeTooHighException &e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m\n" << std::endl;
		}
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	}
	{
		std::cout << "           \033[37mTESTING SIGN FUNCTIONS\033[0m\n" << std::endl;
		Form Form1;// ("Default-Form", 8, 9)
		Form Form2("Master-Form", 24, 60);
		Bureaucrat A("AyAyron", 8);
		Bureaucrat B("Balakay", 100);
		Bureaucrat D("Deee-Nice", 60);
		std::cout << Form1 << std::endl;
		std::cout << Form2 << std::endl;
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		std::cout << D << std::endl;
	
		try
		{
			A.signForm(Form1);
			A.signForm(Form2);
			B.signForm(Form1); // should fail
		}
		catch(Form::GradeTooLowException &e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m\n" << std::endl;
		}
		try
		{
			std::cout << "\n\033[34mtrying to sign Form2 but Grade is too low for GradeSign\033[0m" << std::endl;
			D.signForm(Form2);
		}
		catch(Form::GradeTooLowException &e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m\n" << std::endl;
		}	
	}
	std::cout << std::endl;
	return 0;
}