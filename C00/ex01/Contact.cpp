/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:10:13 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:05:37 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <string>

Contact::Contact( void ) {
	return ;
}

Contact::~Contact( void ) {
	return ;
}

void Contact::setContact( const std::string &str, int i )
{
	if (i == 1)
		this->firstName = str;
	else if (i == 2)
		this->lastName = str;
	else if (i == 3)
		this->nickname = str;
	else if (i == 4)
		this->phoneNumber = str;
	else if (i == 5)
		this->darkestSecret = str;
	return ;
}

std::string Contact::getContact( int i )
{
	if (i == 1)
		return (this->firstName);
	else if (i == 2)
		return (this->lastName);
	else if (i == 3)
		return (this->nickname);
	else if (i == 4)
		return (this->phoneNumber);
	else
		return (this->darkestSecret);
}
