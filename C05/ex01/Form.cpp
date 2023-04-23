/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:31:47 by dgross            #+#    #+#             */
/*   Updated: 2023/04/20 16:39:26 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#include "Bureaucrat.hpp"
#include <iostream>

Form::Form( void ) : Name( "Default" ), Sign( false ), GradeSign( 8 ), GradeExec( 9 ) {
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
		throw Form::GradeTooLowException( obj.getName() , this->Name );
	this->Sign = true;
	return ;
}

Form::GradeTooLowException::GradeTooLowException( void ) : _error("The Grade is too low!") {
	return ;	
}

Form::GradeTooLowException::GradeTooLowException( std::string const &b, std::string const &f )
: _error( "\033[30m" + b + " \033[31mcouldn't sign " + "\033[35m" + f + "\033[0m because the grade was too low!") {
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
	return (this->_error.c_str());
}

const char* Form::GradeTooHighException::what( void ) const throw() {
	return ("The Grade is too high!");
}

std::ostream &operator<<( std::ostream &output, Form const &obj ) {
	output << "Form \033[35m" << obj.getName() << "\033[0m was";
	if (obj.getSign())
		output << " \033[32msigned\033[0m";
	else
		output << " \033[31mnot signed\033[0m";
	output << "\nMinimum grade to sign is \033[34m" << obj.getGradeSign() << "\033[0m"
			  << "\nMinimum grade to execute is \033[34m" << obj.getGradeExec() << "\033[0m" << std::endl;
	return (output);
}

std::ostream &operator<<( std::ostream &output, Form const *obj ) {
	output << "Form \033[35m" << obj->getName() << "\033[0m was";
	if (obj->getSign())
		output << " \033[32msigned\033[0m";
	else
		output << " \033[31mnot signed\033[0m";
	output << "\nMinimum grade to sign is \033[34m" << obj->getGradeSign() << "\033[0m"
			  << "\nMinimum grade to execute is \033[34m" << obj->getGradeExec() << "\033[0m" << std::endl;
	return (output);
}

bool Form::getSign( void ) const{
	return (this->Sign);
}

std::string Form::getName( void ) const{
	return (this->Name);
}

int Form::getGradeExec( void ) const{
	return (this->GradeExec);
}

int Form::getGradeSign( void ) const{
	return (this->GradeSign);
}