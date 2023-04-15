/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:31:47 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 11:30:44 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#include "Bureaucrat.hpp"
#include <iostream>

Form::Form( void ) : Name( "Test" ), Sign( false ), GradeSign( 8 ), GradeExec( 9 ) {
	if (this->GradeSign < 1 || this->GradeExec < 1)
		throw Form::GradeTooHighException();
	else if (this->GradeSign > 150 || this->GradeExec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form( std::string Name, int const GradeSign, int const GradeExec ) : Name(Name), Sign(false), GradeSign(GradeSign), GradeExec(GradeExec) {
	if (this->GradeSign < 1 || this->GradeExec < 1)
		throw Form::GradeTooHighException();
	else if (this->GradeSign > 150 || this->GradeExec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form( void ) {
	return ;
}

Form::Form( const Form &obj ) : Name(obj.getName()), Sign(false), GradeSign(8), GradeExec(9) {
	*this = obj;
	return ;
}

Form &Form::operator=( Form const &instance) {
	this->Sign = instance.Sign;
	return (*this);
}

void Form::beSigned( Bureaucrat &obj ) {
	if ( obj.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	this->Sign = true;
	return ;
}

Form::GradeTooLowException::GradeTooLowException( void ) {
	return ;	
}

Form::GradeTooHighException::GradeTooHighException( void ) {
	return ;	
}

Form::GradeTooHighException::~GradeTooHighException( void ) throw() {
	return ;	
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw() {
	return ;	
}

const char* Form::GradeTooLowException::what( void ) const throw() {
	return ("The Grade is too low !");
}

const char* Form::GradeTooHighException::what( void ) const throw() {
	return ("The Grade is too high !");
}

std::ostream &operator<<( std::ostream &output, Form *obj ) {
	std::cout << "Form " << obj->getName();
	if (obj->getSign())
		std::cout << " was signed ";
	else
		std::cout << " was not signed ";
	std::cout << " and the GradeSign is " << obj->getGradeSign() << " and the GradeExec is " << obj->getGradeExec() << " !" << std::endl;
	return (output);
}

bool Form::getSign( void ) {
	return (this->Sign);
}

std::string Form::getName( void ) const{
	return (this->Name);
}

int Form::getGradeExec( void ) {
	return (this->GradeExec);
}

int Form::getGradeSign( void ) {
	return (this->GradeSign);
}