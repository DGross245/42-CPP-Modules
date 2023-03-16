/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:45 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 16:18:12 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <string>

class PresidentialPardonForm {

public:
	PresidentialPardonForm( void );
	~PresidentialPardonForm( void );
	PresidentialPardonForm( PresidentialPardonForm const &obj);
	PresidentialPardonForm &operator=( PresidentialPardonForm const &obj );
private:

	std::string const	Name;
	bool				Sign;
	int const			GradeSign;
	int const 			GradeExec;
};

#endif