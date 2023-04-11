/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:57:18 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 15:54:37 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap	&operator=( ScavTrap const &obj );
	void 	attack( const std::string& target );
	void 	guardGate( void );
	ScavTrap( void );
	ScavTrap( std::string Name );
	ScavTrap( ScavTrap const &obj );
	virtual	~ScavTrap( void );
	
private:
	
};

#endif