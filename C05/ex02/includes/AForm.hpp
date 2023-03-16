/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:01:41 by dgross            #+#    #+#             */
/*   Updated: 2023/03/16 16:24:07 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <string>

class AForm {

public:

	AForm( void );
	~AForm( void );
	AForm( AForm const &obj);
	AForm &operator=( AForm const &obj );

private:
	
	std::string const	Name;
	bool				Sign;
	int const			GradeSign;
	int const 			GradeExec;

};

#endif