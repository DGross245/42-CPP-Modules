/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:59 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 22:03:38 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PresidentialPardonForm", 25, 5) {
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &obj) {
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj) {
	return (*this);
}