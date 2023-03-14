/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:39:45 by dgross            #+#    #+#             */
/*   Updated: 2023/03/14 13:34:21 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include <string>

Bureaucrat::Bureaucrat( void ) {
	return ;	
}

Bureaucrat::Bureaucrat( const std::string &tag, int nbr ) : Name(tag), Grade(nbr) {
	if (Grade < 1)
		throw Bureaucrat::GradeTooLowException( nbr );
	else if (Grade > 150)
		throw Bureaucrat::GradeTooHighException( nbr );
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
		;
	return ;
}

void Bureaucrat::Decrement( void ) {
	this->Grade++;
	if (this->Grade > 150)
		;
	return ;
}
	
std::string Bureaucrat::getName( void ) const {
	return (this->Name);
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &instance) {
	this->Grade = instance.Grade;
	return (*this);
}

std::ostream &operator<<( std::ostream &output, Bureaucrat &obj ) {
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (output);
}

Bureaucrat::GradeTooLowException::GradeTooLowException( void ) {
	return ;	
}

Bureaucrat::GradeTooHighException::GradeTooHighException( void ) {
	return ;	
}

Bureaucrat::GradeTooLowException::GradeTooLowException( int number ) {
	std::cout << "The Grade " << number << " is to low !" << std::endl;
	return ;	
}

Bureaucrat::GradeTooHighException::GradeTooHighException( int number ) {
	std::cout << "The Grade " << number << " is to high !" << std::endl;
	return ;	
}

Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw(){
	return ;	
}

Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw(){
	return ;	
}
