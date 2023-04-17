/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:33:08 by dgross            #+#    #+#             */
/*   Updated: 2023/04/17 17:56:43 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		std::cout << "/////////TESTING CREATION LIMITS/////////" << std::endl;
		std::cout << "-------------GradeExec-------------------\n" << std::endl;
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
		std::cout << "-------------GradeSign-------------------\n" << std::endl;
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
		std::cout << "           TESTING SIGN FUNCTIONS\n" << std::endl;
		Form Form1;// ("Default-Form", 8, 9)
		Form Form2("Master-Form", 24, 60);
		Bureaucrat B("Bur", 100);
		Bureaucrat C("Me", 8);
		try
		{
			C.signForm(Form1);
		}
		catch(Form::GradeTooLowException& e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m\n" << std::endl;
		}
	}
	return 0;
}