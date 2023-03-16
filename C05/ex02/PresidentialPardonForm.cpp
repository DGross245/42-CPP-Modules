/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:59 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 15:28:02 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : GradeSign(145), GradeExec(137) {
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