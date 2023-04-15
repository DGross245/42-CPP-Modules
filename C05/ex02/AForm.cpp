/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:54 by dgross            #+#    #+#             */
/*   Updated: 2023/04/15 11:56:30 by dna              ###   ########.fr       */
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
	if ( obj.getGrade() > this->getGradeSign())
		throw AForm::GradeTooLowException();
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
	if (obj->getSign() == true)
		std::cout << " was signed ";
	else
		std::cout << " was not signed ";
	std::cout << " and the GradeSign is " << obj->getGradeSign() << " and the GradeExec is " << obj->getGradeExec() << " !" << std::endl;
	return (output);
}

bool AForm::getSign( void ) const{
	return (this->Sign);
}

std::string AForm::getName( void ) const{
	return (this->Name);
}

int AForm::getGradeExec( void ) const{
	return (this->GradeExec);
}

int AForm::getGradeSign( void ) {
	return (this->GradeSign);
}

void AForm::execute(Bureaucrat const &executor) const {
	if (this->Sign == true )
	{
		if (this->GradeExec <= executor.getGrade())
			std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	else
		std::cout << executor.getName() << " can't execute " << this->getName() << " , because it was not Signed !" << std::endl;
}