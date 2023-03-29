/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:47:04 by dgross            #+#    #+#             */
/*   Updated: 2023/03/29 07:16:39 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include "Weapon.hpp"

class HumanB {

public:

	void attack( void );
	void setWeapon( Weapon &club );
	HumanB( std::string name );
	~HumanB( void );

private:

	Weapon *_Weapon;
	std::string _name;

};

#endif