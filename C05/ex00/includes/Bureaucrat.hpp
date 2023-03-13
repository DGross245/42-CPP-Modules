/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:39:47 by dgross            #+#    #+#             */
/*   Updated: 2023/03/13 16:49:33 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include "GradeTooLowException.hpp"
# include "GradeTooHighException.hpp"

class Bureaucrat {

public:
	Bureaucrat( void );
	Bureaucrat( Bureaucrat const &obj);
	Bureaucrat( const std::string &tag );
	~Bureaucrat( void );
	Bureaucrat &operator=( Bureaucrat const &obj );
	std::string getName( void ) const;
	int getGrade( void );
	void Increment( void );
	void Decrement( void );

private:
	std::string const	Name;
	int					Grade;
	GradeTooLowException &low;
	GradeTooHighException &high;
};

std::ostream &operator<<( std::ostream &output, Bureaucrat const &obj );

#endif