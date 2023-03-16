/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:48 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 16:23:48 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H 
# define ROBOTOMYREQUESTFORM_H

# include <string>

class RobotomyRequestForm {

public:
	RobotomyRequestForm( void );
	~RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm const &obj);
	RobotomyRequestForm &operator=( RobotomyRequestForm const &obj );
private:

	std::string const	Name;
	bool				Sign;
	int const			GradeSign;
	int const 			GradeExec;

};

#endif