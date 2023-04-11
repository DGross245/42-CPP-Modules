/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:17:44 by dgross            #+#    #+#             */
/*   Updated: 2023/04/10 17:52:14 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

public:

	Cat( void );
	~Cat( void );
	Cat( const Cat &obj );
	Cat &operator=( Cat const &instance);
	void	makeSound( void ) const;

private:

	Brain	*brain;

};

#endif