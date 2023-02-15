/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:38:46 by dgross            #+#    #+#             */
/*   Updated: 2023/02/15 16:45:20 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name ) {
	Zombie *ptr = new Zombie;
	ptr->name = name;
	return (ptr);
}
