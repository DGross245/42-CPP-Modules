/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:54 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 19:38:27 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm( void ) : Name("Test"), Sign(false), GradeSign(8), GradeExec(9) {
	return ;
}

AForm::AForm( std::string Name, int const GradeSign, int const GradeExec ) : Name(Name), Sign(false), GradeSign(GradeSign), GradeExec(GradeExec){
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

void AForm::beSigned( Bureaucrat &obj ) {
	if ( obj.getGrade() < this->getGradeSign())
		throw AForm::GradeTooLowException();
	else if ( obj.getGrade() < 0)
		throw AForm::GradeTooHighException();
	this->Sign = true;
	return ;
}

AForm::GradeTooLowException::GradeTooLowException( void ) {
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

const char* AForm::GradeTooLowException::what( void ) const throw() {
	return ("The Grade is too low !");
}

const char* AForm::GradeTooHighException::what( void ) const throw() {
	return ("The Grade is too high !");
}

std::ostream &operator<<( std::ostream &output, AForm *obj ) {
	std::cout << "AForm " << obj->getName();
	if (obj->getSign())
		std::cout << " was signed ";
	else
		std::cout << " was not signed ";
	std::cout << " and the GradeSign is " << obj->getGradeSign() << " and the GradeExec is " << obj->getGradeExec() << " !" << std::endl;
	return (output);
}

bool AForm::getSign( void ) {
	return (this->Sign);
}

std::string AForm::getName( void ) const{
	return (this->Name);
}

int AForm::getGradeExec( void ) {
	return (this->GradeExec);
}

int AForm::getGradeSign( void ) {
	return (this->GradeSign);
}