/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:39:45 by dgross            #+#    #+#             */
/*   Updated: 2023/03/13 16:34:09 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat( void ) {
	return ;	
}

Bureaucrat::Bureaucrat( const std::string &tag ) : Name(tag) {
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

std::ostream &operator<<( std::ostream &output, Bureaucrat const &obj ) {
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (output);
}