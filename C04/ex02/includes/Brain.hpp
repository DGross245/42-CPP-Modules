/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:17:49 by dgross            #+#    #+#             */
/*   Updated: 2023/02/28 09:20:34 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {

public:

	Brain( void );
	~Brain( void );
	Brain( const Brain &obj );
	Brain &operator=( Brain const &instance);
	std::string ideas[100];

private:
	
protected:


};

#endif