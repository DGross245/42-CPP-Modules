/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:57:18 by dgross            #+#    #+#             */
/*   Updated: 2023/02/25 13:35:54 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>

class ScavTrap {

public:

	ScavTrap	&operator=( ScavTrap const &obj );
	void 	attack( const std::string& target );
	void 	takeDamage( unsigned int amount );
	void 	beRepaired( unsigned int amount );
	void 	guardGate( void );
	ScavTrap( void );
	ScavTrap( std::string Name );
	ScavTrap( ScavTrap const &obj );
	~ScavTrap( void );
	
private:

	std::string Name;
	int			Hit_points;
	int			Energy_points;
	int			Attack_dmg;
	
};

#endif