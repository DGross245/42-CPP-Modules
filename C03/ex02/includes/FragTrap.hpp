/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 09:48:55 by dna               #+#    #+#             */
/*   Updated: 2023/04/07 20:44:44 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string Name );
	FragTrap( FragTrap const &obj );
	virtual ~FragTrap( void );
	FragTrap &operator=( FragTrap const &obj );
	void highFiveGuys( void );

private:

};

#endif
