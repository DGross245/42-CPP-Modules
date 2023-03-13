/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:31:13 by dgross            #+#    #+#             */
/*   Updated: 2023/03/13 16:28:40 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION_H
# define GRADETOOHIGHEXCEPTION_H

# include "Bureaucrat.hpp"

class GradeTooHighException : public Bureaucrat {

public:
	GradeTooHighException( void );
	~GradeTooHighException( void );

private:

};

#endif 