/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:18:08 by dgross            #+#    #+#             */
/*   Updated: 2023/03/27 13:32:46 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal{

public:

	WrongCat( void );
	~WrongCat( void );
	WrongCat( const WrongCat &obj );
	void makeSound( void ) const;
	WrongCat &operator=( WrongCat const &instance);

private:

protected:

};

#endif