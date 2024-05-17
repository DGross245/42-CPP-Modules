/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:54 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:15:37 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm( void ) : Name("Test"), Sign(false), GradeSign(8), GradeExec(9) {
	return ;
}

AForm::AForm( std::string Name, int const GradeSign, int const GradeExec ) : Name(Name), Sign(false), GradeSign(GradeSign), GradeExec(GradeExec) {
	if (this->GradeSign < 1 || this->GradeExec < 1)
		throw AForm::GradeTooHighException();
	else if (this->GradeSign > 150 || this->GradeExec > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::~AForm( void ) {
	return ;
}

AForm::AForm( const AForm &obj ) : Name(obj.getName()), Sign(false), GradeSign(8), GradeExec(9) {
	*this = obj;
	return ;
}

AForm &AForm::operator=( AForm const &instance) {
	this->Sign = instance.Sign;
	return (*this);
}


AForm::GradeTooLowException::GradeTooLowException( void ) : _error("The Grade is too low!") {
	return ;	
}

AForm::GradeTooLowException::GradeTooLowException( std::string const &b, std::string const &f , int i) {
	if (i == 0)
		this->_error = "\033[30m" + b + " \033[31mcouldn't sign " + "\033[35m" + f + "\033[0m because the grade was too low!";
	else if (i == 1)
		this->_error = "\033[30m" + b + " \033[31mcouldn't execute " + "\033[35m" + f + "\033[0m because the grade was too low!";
	else
		this->_error = "The Grade is too low!";
	return ;	
}

AForm::GradeTooHighException::GradeTooHighException( void ) {
	return ;	
}

AForm::GradeTooHighException::~GradeTooHighException( void ) throw() {
	return ;	
}

AForm::GradeTooLowException::~GradeTooLowException( void ) throw() {
	return ;	
}

AForm::NotSigned::NotSigned( void ) {
	return ;
}

const char* AForm::GradeTooLowException::what( void ) const throw() {
	return (this->_error.c_str());
}

const char* AForm::NotSigned::what( void ) const throw() {
	return ("Form is not signed!");
}

const char* AForm::GradeTooHighException::what( void ) const throw() {
	return ("The Grade is too high !");
}

std::ostream &operator<<( std::ostream &output, AForm const &obj ) {
	output << "AForm \033[35m" << obj.getName() << "\033[0m was";
	if (obj.getSign())
		output << " \033[32msigned\033[0m";
	else
		output << " \033[31mnot signed\033[0m";
	output << "\nMinimum grade to sign is \033[34m" << obj.getGradeSign() << "\033[0m"
			  << "\nMinimum grade to execute is \033[34m" << obj.getGradeExec() << "\033[0m" << std::endl;
	return (output);
}

std::ostream &operator<<( std::ostream &output, AForm const *obj ) {
	output << "AForm \033[35m" << obj->getName() << "\033[0m was";
	if (obj->getSign())
		output << " \033[32msigned\033[0m";
	else
		output << " \033[31mnot signed\033[0m";
	output << "\nMinimum grade to sign is \033[34m" << obj->getGradeSign() << "\033[0m"
			  << "\nMinimum grade to execute is \033[34m" << obj->getGradeExec() << "\033[0m" << std::endl;
	return (output);
}

bool AForm::getSign( void ) const{
	return (this->Sign);
}

std::string AForm::getName( void ) const {
	return (this->Name);
}

int AForm::getGradeExec( void ) const {
	return (this->GradeExec);
}

int AForm::getGradeSign( void ) const {
	return (this->GradeSign);
}

void AForm::beSigned( Bureaucrat &obj ) {
	if (obj.getGrade() > this->getGradeSign())
		throw AForm::GradeTooLowException( obj.getName() , this->Name, 0 );
	this->Sign = true;
	return ;
}

void AForm::execute(Bureaucrat const &executor) const {
	if (this->Sign == true )
	{
		if (executor.getGrade() > this->getGradeExec())
			throw AForm::GradeTooLowException( executor.getName() , this->Name, 1 );
		else
			std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	}
	else
		throw AForm::NotSigned();
	return ;
}