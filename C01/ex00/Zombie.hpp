/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:38:54 by dgross            #+#    #+#             */
/*   Updated: 2023/02/15 15:21:58 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {

public:

	void	announce( void );
	Zombie *newZombie( std::string name );
	void	randomChump( std::string name );
	Zombie( void );
	~Zombie( void );

private:
	std::string name;
};

#endif