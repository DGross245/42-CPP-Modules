/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:39:45 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 10:46:19 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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