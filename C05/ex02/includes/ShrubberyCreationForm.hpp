/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:50 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 21:55:25 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBYCREATIONFORM_H

# include <string>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

public:
	ShrubberyCreationForm( void );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm( ShrubberyCreationForm const &obj);
	ShrubberyCreationForm &operator=( ShrubberyCreationForm const &obj );
	void ExecAction( void );
private:

	std::string const	Name;
	bool				Sign;
	int const			GradeSign;
	int const 			GradeExec;

};

#endif