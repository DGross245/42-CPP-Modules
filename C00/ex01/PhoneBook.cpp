/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:16:59 by dgross            #+#    #+#             */
/*   Updated: 2023/02/14 19:46:37 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	aktive = 0;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

void	PhoneBook::AddContact( int i ) {
	std::string	str;

	std::cout << "First name : ";
	std::getline( std::cin, str );
	while (str.empty())
	{
		std::cout << "No space allowed !" << std::endl;
		std::cout << "First name : ";
		std::getline( std::cin, str );
	}
	PhoneBook::contact[i].setContact( str, 1 );
	std::cout << "Last name : ";
	std::getline( std::cin, str );
	while (str.empty())
	{
		std::cout << "No space allowed !" << std::endl;
		std::cout << "First name : ";
		std::getline( std::cin, str );
	}
	PhoneBook::contact[i].setContact( str, 2 );
	std::cout << "Nickname : ";
	std::getline( std::cin, str );
	while (str.empty())
	{
		std::cout << "No space allowed !" << std::endl;
		std::cout << "First name : ";
		std::getline( std::cin, str );
	}
	PhoneBook::contact[i].setContact( str, 3 );
	std::cout << "Phone number: ";
	std::getline( std::cin, str );
	while (str.empty())
	{
		std::cout << "No space allowed !" << std::endl;
		std::cout << "First name : ";
		std::getline( std::cin, str );
	}
	PhoneBook::contact[i].setContact( CheckNumber( str ), 4 );
	std::cout << "Darkest secret : ";
	std::getline( std::cin, str );
	while (str.empty())
	{
		std::cout << "No space allowed !" << std::endl;
		std::cout << "First name : ";
		std::getline( std::cin, str );
	}
	PhoneBook::contact[i].setContact( str, 5 );
	if (aktive < 8)
		aktive++;
	return ;
}

void	PhoneBook::SearchContact( void ) {
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	int	index;

	DisplayBook( 9 , firstName, lastName, nickname );
	for(int i = 0; i < 8; i++)
	{
		firstName = CheckLenght(PhoneBook::contact[i].getContact( 1 ));
		lastName = CheckLenght(PhoneBook::contact[i].getContact( 2 ));
		nickname = CheckLenght(PhoneBook::contact[i].getContact( 3 ));
		phoneNumber = CheckLenght(PhoneBook::contact[i].getContact( 4 ));
		darkestSecret = CheckLenght(PhoneBook::contact[i].getContact ( 5 ));
		DisplayBook( i + 1, firstName, lastName, nickname );
	}
	std::cout << "Select user index : ";
	std::cin >> index;
	while (index > aktive || index < 1)
	{
		std::cout << "Invalid index" << std::endl;
		std::cout << "Select user index : ";
		std::cin >> index;
	}
	DisplayData( index );
	return ;
}

void PhoneBook::DisplayData( int index ) {
	std::cout << "First name : " << PhoneBook::contact[index - 1].getContact( 1 ) << std::endl;
	std::cout << "Last name : " << PhoneBook::contact[index - 1].getContact( 2 ) << std::endl;
	std::cout << "Nickname : " << PhoneBook::contact[index - 1].getContact( 3 ) << std::endl;
	std::cout << "Phone number: " << PhoneBook::contact[index - 1].getContact( 4 ) << std::endl;
	std::cout << "Darkest secret : " << PhoneBook::contact[index - 1].getContact( 5 ) << std::endl;
	return ;
}
Contact::Contact( void ) {
	return ;
}

Contact::~Contact( void ) {
	return ;
}

std::string PhoneBook::CheckLenght( std::string str ) {
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void PhoneBook::DisplayBook( int index, std::string firstName, std::string lastName, std::string Nickname )
{
	if (index == 9)
	{
		std::cout << std::right << std::setw( 10 ) << "Index" << "|" 
			  << std::right << std::setw( 10 ) << "firstName" << "|" 
			  << std::right << std::setw( 10 ) << "lastName" << "|" 
			  << std::right << std::setw( 10 ) << "Nickname" << std::endl;
	}
	else
	{
		std::cout << std::right << std::setw( 10 ) << index << "|" 
			 	  << std::right << std::setw( 10 ) << firstName << "|" 
				  << std::right << std::setw( 10 ) << lastName << "|" 
				  << std::right << std::setw( 10 ) << Nickname << std::endl;
	}
	return ;
}

void Contact::setContact( const std::string& str, int i )
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

std::string PhoneBook::CheckNumber( std::string str )
{
	int i = -1;

	while (str[++i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			std::cout << " Wrong Input, pls use Digits !" << std::endl << "Phone number:";
			std::cin >> str;
			i = -1;
		}
	}
	return (str);
}