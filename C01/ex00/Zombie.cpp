/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:38:52 by dgross            #+#    #+#             */
/*   Updated: 2023/04/05 10:22:10 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	return ;
}

Zombie::Zombie( std::string ZombieName ) : name( ZombieName ) {
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " was killed" << std::endl;
	return ;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
