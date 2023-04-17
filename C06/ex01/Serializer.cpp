/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:23:26 by dna               #+#    #+#             */
/*   Updated: 2023/04/16 21:44:50 by dna              ###   ########.fr       */
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

unsigned long Serializer::serialize( Data *ptr ) {
	return (reinterpret_cast <unsigned long>( ptr ));
}

Data *Serializer::deserialize( unsigned long raw ) {
	return (reinterpret_cast <Data *>( raw ));	
}