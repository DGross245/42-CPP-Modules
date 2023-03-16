/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:41 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 21:57:19 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <string>
# include <iostream>

class Bureaucrat;

class AForm {

public:
	AForm( void );
	~AForm( void );
	AForm( const AForm &obj);
	AForm( std::string Name, int const GradeSign, int const GradeExec );
	AForm &operator=( AForm const &obj );
	void beSigned( Bureaucrat &obj);
	bool getSign( void );
	int getGradeSign( void );
	int getGradeExec( void );
	std::string getName( void ) const;
	virtual void execute(Bureaucrat const & executor) const = 0;
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
	bool				Sign;
	int const			GradeSign;
	int const 			GradeExec;
};

std::ostream &operator<<( std::ostream &output, AForm *obj );


#endif