/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:34:25 by dna               #+#    #+#             */
/*   Updated: 2023/02/20 09:21:29 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {

public:

	void	announce( void );
	Zombie *zombieHorde( int N, std::string name );
	Zombie( void );
	~Zombie( void );

private:
	std::string name;
};
	

#endif