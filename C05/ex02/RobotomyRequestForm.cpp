/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:53:02 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 15:28:16 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : GradeSign(72), GradeExec(45) {
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