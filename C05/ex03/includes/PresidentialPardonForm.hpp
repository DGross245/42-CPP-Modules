/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:45 by dgross            #+#    #+#             */
/*   Updated: 2023/04/20 16:41:33 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string Target );
	~PresidentialPardonForm( void );
	std::string	getTarget( void ) const;
	PresidentialPardonForm( PresidentialPardonForm const &obj );
	PresidentialPardonForm &operator=( PresidentialPardonForm const &obj );
	virtual void execute( Bureaucrat const & executor ) const;

private:

	std::string Target;

};

#endif