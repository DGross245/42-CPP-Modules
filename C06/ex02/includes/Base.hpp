/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:47:21 by dna               #+#    #+#             */
/*   Updated: 2023/03/27 13:36:08 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BASE_H

# define BASE_H

class Base {

public:

	Base( void );
	virtual ~Base( void );
	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);
	
private:

};

#endif