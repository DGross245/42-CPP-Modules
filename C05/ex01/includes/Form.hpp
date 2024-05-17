/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:11:29 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:14:20 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <string>
# include <iostream>

class Bureaucrat;

class Form {

public:

	Form( void );
	~Form( void );
	Form( const Form &obj);
	Form( std::string Name, int const GradeSign, int const GradeExec );
	Form &operator=( Form const &obj );
	void beSigned( Bureaucrat &obj);
	bool getSign( void ) const;
	int getGradeSign( void ) const;
	int getGradeExec( void ) const;
	std::string getName( void ) const;
	class GradeTooLowException : public std::exception {

	public:

		GradeTooLowException( void );
		GradeTooLowException( std::string const &b, std::string const &f );
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

std::ostream &operator<<( std::ostream &output, Form const &obj );
std::ostream &operator<<( std::ostream &output, Form const *obj );

#endif