/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 09:48:54 by dna               #+#    #+#             */
/*   Updated: 2023/03/28 12:55:40 by dgross           ###   ########.fr       */
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

	std::string Name;
	int			Hit_points;
	int			Energy_points;
	int			Attack_dmg;
	
};

#endif