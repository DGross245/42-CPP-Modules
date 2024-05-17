/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:34:25 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:06:59 by dgross           ###   ########.fr       */
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