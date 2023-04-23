/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:31:18 by dgross            #+#    #+#             */
/*   Updated: 2023/04/23 10:39:39 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>

class Form;

class Bureaucrat {

public:

	Bureaucrat( void );
	Bureaucrat( Bureaucrat const &obj);
	Bureaucrat( std::string const &tag, int nbr);
	~Bureaucrat( void );
	Bureaucrat &operator=( Bureaucrat const &obj );
	std::string getName( void ) const;
	int getGrade( void ) const;
	void Increment( void );
	void Decrement( void );
	void signForm( Form &obj);

	class GradeTooLowException : public std::exception {

	public:
	
		GradeTooLowException( void );
		~GradeTooLowException( void ) throw();
		virtual const char* what() const throw();
	
	};

	class GradeTooHighException : public std::exception {
	
	public:

		GradeTooHighException( void );
		~GradeTooHighException( void ) throw();
		virtual const char* what() const throw();

	};

private:

	std::string const	Name;
	int					Grade;
	
};

std::ostream &operator<<( std::ostream &output, Bureaucrat const &obj );
std::ostream &operator<<( std::ostream &output, Bureaucrat const *obj );

#endif