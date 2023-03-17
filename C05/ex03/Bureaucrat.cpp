/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:57 by dgross            #+#    #+#             */
/*   Updated: 2023/03/17 15:11:26 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include <iostream>
#include <string>

Bureaucrat::Bureaucrat( void ) : Name("test"), Grade(5) {
	return ;	
}

Bureaucrat::Bureaucrat( const std::string &tag, int nbr ) : Name(tag) {
	if (nbr < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (nbr > 150)
		throw Bureaucrat::GradeTooHighException();
	this->Grade = nbr;
	return ;	
}

Bureaucrat::Bureaucrat( const Bureaucrat &obj ) {
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
	this->Grade--;
	if (this->Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void Bureaucrat::Decrement( void ) {
	this->Grade++;
	if (this->Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}
	
std::string Bureaucrat::getName( void ) const {
	return (this->Name);
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &instance) {
	this->Grade = instance.Grade;
	return (*this);
}

std::ostream &operator<<( std::ostream &output, Bureaucrat *obj ) {
	output << obj->getName() << ", bureaucrat grade " << obj->getGrade() << std::endl;
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
	if (obj.getSign() == true)
		std::cout << this->Name << " signed " << obj.getName() << std::endl;
	else
	{
		std::cout << this->Name << " couldn’t sign "<< obj.getName() << " because ";
		if (this->Grade < 1)
			std::cout << "the grade was to high" << std::endl;
		else
			std::cout << "the grade was to low" << std::endl;
			std::cout << "DEBUGGGGGG = " << this->Grade << "  ," << obj.getGradeSign() << std::endl;
	}
	return ;
}

void Bureaucrat::executeForm( AForm const &form) {
	if (form.getGradeExec() >= this->Grade)
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	else
	{
		std::cout << this->getName() << " could not executed " << form.getName() << " because ";
		
	}
	return ;
}