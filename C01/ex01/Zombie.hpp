/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:34:25 by dna               #+#    #+#             */
/*   Updated: 2023/04/05 10:30:51 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {

public:

	void	announce( void );
	void	setname( std::string name );
	Zombie( std::string ZombieName );
	Zombie( void );
	~Zombie( void );

private:

	std::string name;
	
};
	
Zombie *zombieHorde( int N, std::string name );

#endif