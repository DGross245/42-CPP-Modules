/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:47:21 by dna               #+#    #+#             */
/*   Updated: 2023/03/25 18:01:20 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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