/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:57:10 by dgross            #+#    #+#             */
/*   Updated: 2023/04/07 22:04:51 by dna              ###   ########.fr       */
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
	virtual ~ClapTrap( void );
	ClapTrap &operator=( ClapTrap const &obj );
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	
protected:

	std::string Name;
	int			Hit_points;
	int			Energy_points;
	int			Attack_dmg;

private:

};

#endif