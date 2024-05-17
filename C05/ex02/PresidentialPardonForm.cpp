/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:59 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:15:06 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PresidentialPardonForm", 25, 5) {
	this->Target = "default";
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string Target ) : AForm("PresidentialPardonForm", 25, 5) {
	this->Target = Target;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &obj) : AForm(obj) {
	*this = obj;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj) {
	this->Target = obj.getTarget();
	return (*this);
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	if (this->getSign() == true)
	{
		if (executor.getGrade() > this->getGradeExec())
			throw AForm::GradeTooLowException( executor.getName(), this->getName(), 1 );
		else
			std::cout << this->getTarget() << " has been pardoned by Zahod Beebllebrox" << std::endl;
	}
	else
		throw AForm::NotSigned();
	return ;
}

std::string	PresidentialPardonForm::getTarget( void ) const{
	return (this->Target);
}