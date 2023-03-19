/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:16:38 by dgross            #+#    #+#             */
/*   Updated: 2023/03/19 15:59:17 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class Animal {

public:

	Animal( void );
	virtual ~Animal( void );
	Animal( const Animal &obj );
	Animal &operator=( Animal const &instance);
	virtual void	makeSound( void ) const = 0;
	std::string	getType( void ) const;
	
private:

protected:
	std::string type;

};

#endif