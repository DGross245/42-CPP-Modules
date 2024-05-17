/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:16:38 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:11:53 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class Animal {

public:

	Animal( void );
	virtual ~Animal( void );
	Animal( const Animal &obj );
	Animal &operator=( Animal const &instance);
	virtual void	makeSound( void ) const;
	std::string	getType( void ) const;
	
private:

protected:
	std::string type;

};

#endif