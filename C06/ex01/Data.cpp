/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:16:50 by dna               #+#    #+#             */
/*   Updated: 2023/03/25 17:22:30 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) : Information("default") {
	return ;
}

Data::Data( std::string input ) {
	this->Information = input;
	return ;
}

Data::~Data( void ) {
	return ;
}

Data::Data( Data const &obj ) {
	*this = obj;
	return ;
}
std::string Data::getInfo( void ) const {
	return (this->Information);
}

Data &Data::operator=( Data const &obj ) {
	this->Information = obj.getInfo();
	return (*this);
}