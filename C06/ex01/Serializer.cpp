/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:23:26 by dna               #+#    #+#             */
/*   Updated: 2023/03/25 17:23:01 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

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

uintptr_t Serializer::serialize( Data *ptr ) {
	return (reinterpret_cast <uintptr_t>( ptr ));
}

Data *Serializer::deserialize( uintptr_t raw ) {
	return (reinterpret_cast <Data *>( raw ));	
}