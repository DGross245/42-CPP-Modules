/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:38:43 by dna               #+#    #+#             */
/*   Updated: 2023/02/20 11:00:56 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Horde = new Zombie[N];
	int	i = -1;

	while (++i < N)
	{
		Horde[i].setname( name );
		Horde[i].announce();
	}
	return (Horde);
}

void	Zombie::setname( std::string name )
{
	this->name = name;
	return ;
}
