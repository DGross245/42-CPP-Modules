/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:53:02 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 22:06:04 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 72, 45) {
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &obj) {
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj) {
	return (*this);
}