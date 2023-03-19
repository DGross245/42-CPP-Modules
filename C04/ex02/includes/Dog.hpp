/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:17:47 by dgross            #+#    #+#             */
/*   Updated: 2023/03/19 15:38:02 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal {

public:

	Dog( void );
	~Dog( void );
	Dog( const Dog &obj );
	Dog &operator=( Dog const &instance);
	void	makeSound( void ) const;
private:

	class Brain	*brain;

protected:

};

#endif