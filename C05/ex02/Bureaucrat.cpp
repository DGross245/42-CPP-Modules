/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:57 by dgross            #+#    #+#             */
/*   Updated: 2023/03/17 09:14:39 by dna              ###   ########.fr       */
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

int Bureaucrat::getGrade( void ) {
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
	if (obj.getSign())
		std::cout << this->Name << " signed " << obj.getName() << std::endl;
	else
	{
		std::cout << this->Name << " couldn’t sign "<< obj.getName() << " because ";
		if (this->Grade < 1)
			std::cout << "the grade was to high" << std::endl;
		else
			std::cout << "the grade was to low" << std::endl;
	}
	return ;
}
