/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:41:54 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:16:52 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include "Data.hpp"
# include <stdint.h>

class Serializer {

public:
	static uintptr_t serialize( Data *ptr );
	static Data *deserialize( uintptr_t raw );
	
private:

	Serializer( Serializer const &obj );
	~Serializer( void );
	Serializer &operator=( Serializer const &instance);
	Serializer( void );

}; 

#endif