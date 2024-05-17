/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:16:50 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:17:01 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

Data::Data( void ) : Information("default") {
	return ;
}

Data::Data( std::string input ) : Information(input) {
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

std::ostream &operator<<( std::ostream &output, Data const &obj ) {
	output << obj.getInfo() << std::endl;
	return (output);
}

std::ostream &operator<<( std::ostream &output, Data const *obj ) {
	output << obj->getInfo() << std::endl;
	return (output);
}