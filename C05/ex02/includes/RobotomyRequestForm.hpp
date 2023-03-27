/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:48 by dgross            #+#    #+#             */
/*   Updated: 2023/03/27 13:34:39 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOTOMYREQUESTFORM_H 
# define ROBOTOMYREQUESTFORM_H

# include <string>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string Target );
	~RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm const &obj);
	std::string	getTarget( void ) const;
	RobotomyRequestForm &operator=( RobotomyRequestForm const &obj );
	virtual void execute( Bureaucrat const & executor ) const;
private:
	std::string Target;
};

#endif