/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:47:10 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:08:05 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon {

public:

	void setType( std::string typ );
	std::string const &getType( void );
	Weapon( std::string club );
	~Weapon( void );

private:

	std::string typ;

};

#endif