/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:45 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:14:45 by dgross           ###   ########.fr       */
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