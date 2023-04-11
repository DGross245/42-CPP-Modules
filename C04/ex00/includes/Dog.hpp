/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:17:47 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 16:33:31 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal {

public:

	Dog( void );
	~Dog( void );
	Dog( const Dog &obj );
	void makeSound( void ) const;
	Dog &operator=( Dog const &instance);

private:

};

#endif