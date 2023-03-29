/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:53:00 by dgross            #+#    #+#             */
/*   Updated: 2023/03/28 13:03:08 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( std::string Name );
	ClapTrap( ClapTrap const &obj );
	~ClapTrap( void );
	ClapTrap &operator=( ClapTrap const &obj );
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	
private:

	std::string		Name;
	unsigned int	Hit_points;
	unsigned int	Energy_points;
	unsigned int	Attack_dmg;
	
};

#endif