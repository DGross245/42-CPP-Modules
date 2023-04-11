/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:18:08 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 17:55:58 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal{

public:

	WrongCat( void );
	~WrongCat( void );
	WrongCat( const WrongCat &obj );
	void makeSound( void ) const;
	WrongCat &operator=( WrongCat const &instance);

private:

};

#endif