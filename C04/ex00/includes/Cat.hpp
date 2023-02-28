/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:17:44 by dgross            #+#    #+#             */
/*   Updated: 2023/02/28 07:04:39 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal {

public:

	Cat( void );
	~Cat( void );
	Cat( const Cat &obj );
	Cat &operator=( Cat const &instance);

private:

protected:

};

#endif