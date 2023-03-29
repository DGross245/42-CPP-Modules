/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:46:59 by dgross            #+#    #+#             */
/*   Updated: 2023/03/29 07:16:12 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class HumanA {

public:

	HumanA( std::string name,  Weapon &weapon );
	~HumanA( void );
	void attack( void );

private:

	Weapon &_objekt;
	std::string _name;

};

#endif