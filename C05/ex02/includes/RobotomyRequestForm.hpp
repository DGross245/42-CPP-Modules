/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:48 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 21:55:36 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H 
# define ROBOTOMYREQUESTFORM_H

# include <string>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm( void );
	~RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm const &obj);
	RobotomyRequestForm &operator=( RobotomyRequestForm const &obj );
	void ExecAction( void );
private:

	std::string const	Name;
	bool				Sign;
	int const			GradeSign;
	int const 			GradeExec;

};

#endif