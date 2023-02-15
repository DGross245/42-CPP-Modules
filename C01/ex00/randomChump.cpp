/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:38:49 by dgross            #+#    #+#             */
/*   Updated: 2023/02/15 16:45:51 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

void	Zombie::randomChump( std::string name ) {
	Zombie ptr;

	ptr.name = name;
	ptr.announce();
	return ;
}
