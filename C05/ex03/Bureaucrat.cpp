/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:57 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:15:40 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include <iostream>
#include <string>

Bureaucrat::Bureaucrat( void ) : Name("Default"), Grade(5) {
	return ;	
}

Bureaucrat::Bureaucrat( std::string const &tag, int nbr ) : Name(tag) {
	if (nbr < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (nbr > 150)
		throw Bureaucrat::GradeTooLowException();
	this->Grade = nbr;
	return ;	
}

Bureaucrat::Bureaucrat( Bureaucrat const &obj ) {
	*this = obj;
	return ;	
}

Bureaucrat::~Bureaucrat( void ) {
	return ;	
}

int Bureaucrat::getGrade( void ) const {
	return (this->Grade);
}

void Bureaucrat::Increment( void ) {
	if (this->Grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->Grade--;
	return ;
}

void Bureaucrat::Decrement( void ) {
	if (this->Grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->Grade++;
	return ;
}
	
std::string Bureaucrat::getName( void ) const {
	return (this->Name);
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &instance) {
	this->Grade = instance.Grade;
	return (*this);
}

std::ostream &operator<<( std::ostream &output, Bureaucrat const &obj ) {
	output << "\033[30m" << obj.getName() << "\033[0m, bureaucrat grade \033[34m" << obj.getGrade() << "\033[0m" << std::endl;
	return (output);
}

std::ostream &operator<<( std::ostream &output, Bureaucrat const *obj ) {
	output << "\033[30m" << obj->getName() << "\033[0m, bureaucrat grade \033[34m" << obj->getGrade() << "\033[0m" << std::endl;
	return (output);
}

Bureaucrat::GradeTooLowException::GradeTooLowException( void ) {
	return ;	
}

Bureaucrat::GradeTooHighException::GradeTooHighException( void ) {
	return ;	
}

Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw() {
	return ;	
}

Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw() {
	return ;	
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ("The Grade is too low !");
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ("The Grade is too high !");
}

void	Bureaucrat::signForm( AForm &obj ) {
	try
	{
		obj.beSigned(*this);
		std::cout << "\033[30m" << this->Name << " \033[32msigned \033[35m" << obj.getName() << "\033[0m" << std::endl;
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}

void Bureaucrat::executeForm( AForm const &form) {
	try
	{
		form.execute(*this);
		std::cout << "\033[30m" << this->Name << " \033[32mexecuted \033[35m" << form.getName() << "\033[0m" << std::endl;
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}