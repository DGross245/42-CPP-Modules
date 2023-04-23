/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:39:49 by dgross            #+#    #+#             */
/*   Updated: 2023/04/18 23:49:30 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main(void)
{
	std::cout << "#####\033[32mTESTING BUREAUCRAT\033[0m#####" << std::endl;
	{
		Bureaucrat *A = new Bureaucrat();

		std::cout << "\n" << A;

		try
		{
			std::cout << "\033[33mIncrementing...\033[0m" << std::endl;
			A->Increment();
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
		}
		std::cout << "\033[32mResult = " << A << "\033[0m" <<std::endl;
		std::cout << "--------------------------------------------\n" << std::endl;
		std::cout << A;

		try
		{
			std::cout << "\033[33mDecrementing...\033[0m" << std::endl;
			A->Decrement();
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
		}
		std::cout << "\033[32mResult = " << A << "\033[0m" <<std::endl;
		std::cout << "------------------------------------------" << std::endl;
		std::cout << "\n\033[34mDecementing til execption (b -> 150)\033[0m" << std::endl;
		std::cout << "Start = " << A;

		try
		{
			while (1)
			{
				A->Decrement();
			}
		} 
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
		}

		std::cout << "\n-----------------------------------------------" << std::endl;
		std::cout << "\n\033[34mIncrementing til execption (b -> 1)\033[0m" << std::endl;
		std::cout << "Start = " << A;

		try
		{
			while (1)
				A->Increment();
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
		}
		
		std::cout << "\n----------------------------" << std::endl;
		std::cout << "End = " << A << std::endl;

		delete A;
	}
	{
		std::cout << "-----------------------------------------------\n";
		std::cout << "\033[34mCreating Kevin with a grade of 151...\033[0m" << std::endl;
		try
		{
			Bureaucrat B("Kevin", 151);
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
		}
		std::cout << "\n-----------------------------------------------\n";
		std::cout << "\033[34mCreating Kevin with a grade of 0...\033[0m" << std::endl;
		try
		{
			Bureaucrat B("Kevin", 0);
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[0m\n" << std::endl;
		}
		std::cout << "#######\033[31mTEST END\033[0m#######" << std::endl;
	}
	return (0);
}