/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:26 by dna               #+#    #+#             */
/*   Updated: 2023/05/07 10:40:20 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

# include <string>
# include <stack>

class RPN {

public:

	static void	calculator( std::string rpn );

	class InvalidExpressionException : public std::exception {

	public:

		InvalidExpressionException( std::string Error );
		~InvalidExpressionException( void ) throw();
		virtual const char* what() const throw();
	
	private:

		std::string _error;
	};

private:

	RPN( void );
	~RPN( void );
	RPN( RPN const &obj );
	RPN &operator=( RPN const &obj );

};

#endif