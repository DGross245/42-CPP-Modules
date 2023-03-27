/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:17:51 by dgross            #+#    #+#             */
/*   Updated: 2023/03/27 13:32:43 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>

class WrongAnimal {

public:

	WrongAnimal( void );
	~WrongAnimal( void );
	WrongAnimal( const WrongAnimal &obj );
	WrongAnimal &operator=( WrongAnimal const &instance);
	void	makeSound( void ) const;
	std::string getType( void ) const;
private:

protected:
	std::string type;
};

#endif