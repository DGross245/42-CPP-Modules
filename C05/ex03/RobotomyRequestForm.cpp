/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:53:02 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 19:57:14 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 72, 45) {
	this->Target = "default";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string Target ) : AForm("RobotomyRequestForm", 72, 45) {
	this->Target = Target;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &obj) : AForm(obj) {
	*this = obj;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj) {
	this->Target = obj.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget( void ) const{
	return (this->Target);
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	if (this->getGradeExec() >= executor.getGrade())
	{
		if (this->getSign() == true)
		{
			std::cout << "Drrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr....." << std::endl;
			std::time_t time = std::time(NULL);
			if (time % 2 == 0)
				std::cout << this->getTarget() << " has been robotomized successfully " << std::endl;
			else
				std::cout << this->getTarget() << " has failed !";
		}
		else
			std::cout << "Form wasnt signed !" << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}