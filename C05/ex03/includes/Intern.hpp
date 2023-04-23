/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:56:52 by dgross            #+#    #+#             */
/*   Updated: 2023/04/23 08:27:21 by dna              ###   ########.fr       */
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