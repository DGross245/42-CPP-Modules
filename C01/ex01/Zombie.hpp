/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:34:25 by dna               #+#    #+#             */
/*   Updated: 2023/02/20 11:01:12 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {

public:

	void	announce( void );
	void	setname( std::string name );
	Zombie( void );
	~Zombie( void );

private:
	std::string name;
};
	
Zombie *zombieHorde( int N, std::string name );

#endif