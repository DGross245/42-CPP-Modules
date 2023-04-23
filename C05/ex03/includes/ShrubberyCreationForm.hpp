/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:50 by dgross            #+#    #+#             */
/*   Updated: 2023/04/20 16:41:54 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <string>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

public:

	ShrubberyCreationForm( void );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm( ShrubberyCreationForm const &obj);
	ShrubberyCreationForm &operator=( ShrubberyCreationForm const &obj );
	ShrubberyCreationForm( std::string Target );
	virtual void execute( Bureaucrat const & executor ) const;
	std::string	getTarget( void ) const;

private:

	std::string Target;

};

#endif