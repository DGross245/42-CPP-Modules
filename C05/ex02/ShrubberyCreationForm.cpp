/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:53:05 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 19:52:49 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137) {
	this->Target = "default";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string Target ) : AForm("ShrubberyCreationForm", 145, 137) {
	this->Target = Target;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &obj) : AForm(obj) {
	*this = obj;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj) {
	this->Target = obj.getTarget();
	return (*this);
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	if (this->getGradeExec() <= executor.getGrade())
	{
		if (this->getSign() == true)
		{
			std::fstream outfile;
			std::string outfileName = Target + "_shrubbery";
			outfile.open( outfileName.c_str(), std::fstream::in );
			if (outfile.is_open())
			{
				outfile << "       _-_       \n"
						<< "   //~~   ~~\\   \n"
						<< " //~~         ~~\\ \n"
						<< "{               }\n"
						<< " \\  _-     -_ // \n"
						<< "   ~  \\ //  ~   \n"
						<< "_- -   | | _- _  \n"
						<< "  _ -  | |   -_  \n"
						<<  "     // \\        " << std::endl;
				outfile.close();
			}
			else
				std::cout << " Error : count not open outfile !" << std::endl;
		}
		else
			std::cout << " Form wasnt signed !" << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

std::string	ShrubberyCreationForm::getTarget( void ) const{
	return (this->Target);
}