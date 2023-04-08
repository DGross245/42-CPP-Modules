/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 09:48:57 by dna               #+#    #+#             */
/*   Updated: 2023/04/07 22:04:29 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string Name );
	ScavTrap( ScavTrap const &obj );
	virtual ~ScavTrap( void );
	ScavTrap	&operator=( ScavTrap const &obj );
	void 	attack( const std::string& target );
	void 	guardGate( void );
	
private:
	
};

#endif