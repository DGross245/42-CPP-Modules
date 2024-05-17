/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:23:26 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:17:15 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <stdint.h>

Serializer::Serializer( void ) {
	return ;
}

Serializer::~Serializer( void ) {
	return ;
}

Serializer::Serializer( Serializer const &obj ) {
	*this = obj;
	return ;
}

Serializer &Serializer::operator=( Serializer const &instance) {
	(void)instance;
	return (*this);
}

unsigned long Serializer::serialize( Data *ptr ) {
	return (reinterpret_cast <uintptr_t>( ptr ));
}

Data *Serializer::deserialize( uintptr_t raw ) {
	return (reinterpret_cast <Data *>( raw ));	
}