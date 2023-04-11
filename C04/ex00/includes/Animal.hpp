/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:16:38 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 17:11:50 by dna              ###   ########.fr       */
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