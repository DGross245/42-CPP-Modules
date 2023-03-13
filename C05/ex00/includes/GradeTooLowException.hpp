/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:31:15 by dgross            #+#    #+#             */
/*   Updated: 2023/03/13 16:29:31 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOLOWEXCEPTION_H
# define GRADETOOLOWEXCEPTION_H

# include "Bureaucrat.hpp"

class GradeTooLowException : public Bureaucrat {

public:
	GradeTooLowException( void );
	~GradeTooLowException( void );
private:

};

#endif 