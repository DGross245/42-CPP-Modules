/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:46:59 by dgross            #+#    #+#             */
/*   Updated: 2023/02/20 17:05:01 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class HumanA {

public:
	HumanA( std::string name,  Weapon &weapon);
	~HumanA( void );
	void attack( void );
private:
	Weapon &_objekt;
	std::string _name;
};

#endif