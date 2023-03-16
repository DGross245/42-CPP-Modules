/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:39:47 by dgross            #+#    #+#             */
/*   Updated: 2023/03/15 09:53:12 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
	
class Bureaucrat {

public:
	Bureaucrat( void );
	Bureaucrat( Bureaucrat const &obj);
	Bureaucrat( const std::string &tag, int nbr);
	~Bureaucrat( void );
	Bureaucrat &operator=( Bureaucrat const &obj );
	std::string getName( void ) const;
	int getGrade( void );
	void Increment( void );
	void Decrement( void );

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

std::ostream &operator<<( std::ostream &output, Bureaucrat &obj );

#endif