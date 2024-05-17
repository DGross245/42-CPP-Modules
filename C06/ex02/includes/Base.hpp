/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:47:21 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:17:41 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

class Base {

public:

	Base( void );
	virtual ~Base( void );
	
private:

};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif