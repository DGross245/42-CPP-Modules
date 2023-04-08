/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:38:43 by dna               #+#    #+#             */
/*   Updated: 2023/04/07 22:34:41 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Horde = new Zombie[N];
	int	i = -1;

	while (++i < N)
		Horde[i].setname( name );
	return (Horde);
}

void	Zombie::setname( std::string name )
{
	this->name = name;
	return ;
}
