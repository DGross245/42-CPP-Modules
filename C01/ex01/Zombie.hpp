/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:34:25 by dna               #+#    #+#             */
/*   Updated: 2023/03/29 07:11:28 by dna              ###   ########.fr       */
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
	Zombie( void );
	~Zombie( void );

private:

	std::string name;
	
};
	
Zombie *zombieHorde( int N, std::string name );

#endif