/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:56:52 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:15:23 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_H
# define INTERN_H

# include <string>

class AForm;

class Intern {

public:

	Intern( void );
	~Intern( void );
	Intern( Intern const &obj);
	Intern &operator=( Intern const &obj );
	AForm *makeForm( std::string Form, std::string Target );
	AForm *allocPardonForm( std::string Target );
	AForm *allocCreationForm( std::string Target );
	AForm *allocRequestForm( std::string Target );
	class FormDoesntExistException: public std::exception {

	public:

		FormDoesntExistException( void );
		~FormDoesntExistException( void ) throw();
		virtual const char* what() const throw();
	
	};
private:

};

#endif