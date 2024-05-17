/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:17:49 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:12:43 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {

public:

	Brain( void );
	~Brain( void );
	Brain( const Brain &obj );
	Brain &operator=( Brain const &instance);
	void setIdeas(unsigned int i, std::string thoughts);
	std::string getIdeas( unsigned int i );
	std::string *getAddress( unsigned int i );

private:

	std::string ideas[100];

};

#endif