/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:38:54 by dgross            #+#    #+#             */
/*   Updated: 2023/04/05 10:22:32 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {

public:

	void	announce( void );
	Zombie( void );
	Zombie( std::string ZombieName );
	~Zombie( void );

private:

	std::string name;

};

	Zombie *newZombie( std::string name );
	void	randomChump( std::string name );

#endif