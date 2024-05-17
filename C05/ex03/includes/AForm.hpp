/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:41 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:15:17 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

public:

	AForm( void );
	virtual ~AForm( void );
	AForm( AForm const &obj);
	AForm( std::string Name, int const GradeSign, int const GradeExec );
	AForm &operator=( AForm const &obj );
	void beSigned( Bureaucrat &obj);
	bool getSign( void ) const;
	int getGradeSign( void ) const;
	int getGradeExec( void ) const;
	std::string getName( void ) const;
	virtual void execute(Bureaucrat const &executor) const = 0;
	class NotSigned : public std::exception {
	
		public:
	
		NotSigned( void );
		virtual const char* what() const throw();
	
	};
	class GradeTooLowException : public std::exception {

	public:

		GradeTooLowException( void );
		GradeTooLowException( std::string const &b, std::string const &f, int i );
		~GradeTooLowException( void ) throw();
		virtual const char* what() const throw();

	private:

		std::string _error;

	};

	class GradeTooHighException : public std::exception {

	public:

		GradeTooHighException( void );
		~GradeTooHighException( void ) throw();
		virtual const char* what() const throw();

	};
	
private:

	std::string const	Name;
	bool				Sign;
	int const			GradeSign;
	int const 			GradeExec;

};

std::ostream &operator<<( std::ostream &output, AForm const &obj );
std::ostream &operator<<( std::ostream &output, AForm const *obj );


#endif