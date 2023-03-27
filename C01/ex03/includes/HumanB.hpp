/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:47:04 by dgross            #+#    #+#             */
/*   Updated: 2023/03/27 13:29:57 by dgross           ###   ########.fr       */
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
	void setWeapon( Weapon &club);
	HumanB( std::string name );
	~HumanB( void );
private:
	Weapon *_Weapon;
	std::string _name;
};

#endif