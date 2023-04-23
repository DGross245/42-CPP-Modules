/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:57:08 by dgross            #+#    #+#             */
/*   Updated: 2023/04/23 08:52:52 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

Intern::Intern( void ) {
	return ;
}

Intern::~Intern( void ) {
	return ;
}

Intern::Intern( Intern const &obj ) {
	*this = obj;
	return ;
}

Intern &Intern::operator=( Intern const &obj ) {
	if (this == &obj)
		return (*this);
	return (*this);
}

AForm *Intern::allocPardonForm( std::string Target ) {
	return (new PresidentialPardonForm( Target ));
}

AForm *Intern::allocCreationForm( std::string Target ) {
	return (new ShrubberyCreationForm( Target ));
}

AForm *Intern::allocRequestForm( std::string Target ) {
	return (new RobotomyRequestForm( Target ));
}

Intern::FormDoesntExistException::FormDoesntExistException( void ) {
	return ;	
}

Intern::FormDoesntExistException::~FormDoesntExistException( void ) throw() {
	return ;	
}

const char* Intern::FormDoesntExistException::what( void ) const throw() {
	return ("Form does not exist!");
}

AForm *Intern::makeForm( std::string Form, std::string Target ){
	AForm *(Intern::*Forms[3])( std::string Target ) = { &Intern::allocPardonForm,&Intern::allocCreationForm,&Intern::allocRequestForm };
	std::string input[3] = { "PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};
	int i = -1;

	while (++i < 3)
	{
		if (input[i] == Form)
			return ((this->*Forms[i])( Target ));
	}
	throw Intern::FormDoesntExistException();
	return (NULL);
}
