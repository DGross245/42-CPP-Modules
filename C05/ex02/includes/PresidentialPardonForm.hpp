/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:45 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 21:56:16 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm{

public:
	PresidentialPardonForm( void );
	~PresidentialPardonForm( void );
	PresidentialPardonForm( PresidentialPardonForm const &obj);
	PresidentialPardonForm &operator=( PresidentialPardonForm const &obj );
	void ExecAction( void );
private:

	std::string const	Name;
	bool				Sign;
	int const			GradeSign;
	int const 			GradeExec;
};

#endif