/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:17:44 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:11:57 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal {

public:

	Cat( void );
	~Cat( void );
	Cat( const Cat &obj );
	void makeSound( void ) const;
	Cat &operator=( Cat const &instance);

private:

};

#endif