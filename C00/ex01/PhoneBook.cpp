/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:16:59 by dgross            #+#    #+#             */
/*   Updated: 2023/03/27 11:02:55 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <iostream>
#include <string>
#include <iomanip>


PhoneBook::PhoneBook( void ) {
	aktive = 0;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

int	PhoneBook::GetTheLine( int i, int nbr, std::string msg ) {
	std::string	str;

	std::getline( std::cin, str );
	if (std::cin.eof())
		return (1);
	while (str.empty())
	{
		std::cout << "No space allowed !" << std::endl;
		std::cout << msg;
		std::getline( std::cin, str );
		if (std::cin.eof())
			return (1);
	}
	if ( nbr == 4 )
	{
		int j = 0;
		while (str[j] != '\0')
		{
			if (isdigit(str[j]))
				j++;
			else
			{
				std::cout << "Numbers only !" << std::endl;
				std::cout << msg;
				std::getline( std::cin, str );
				if (std::cin.eof())
					return (1);
				j = 0;
			}
		}
	}
	PhoneBook::contact[i].setContact( str, nbr );
	return (0);
}

void	PhoneBook::AddContact( int i ) {
	std::string	str;

	std::cout << "First name : ";
	if (GetTheLine( i, 1 , "First name : " ))
		return ;
	std::cout << "Last name : ";
	if (GetTheLine( i, 2 , "Last name : " ))
		return ;
	std::cout << "Nickname : ";
	if (GetTheLine( i, 3 , "Nickname : " ))
		return ;
	std::cout << "Phone number : ";
	if (GetTheLine( i, 4 , "Phone number : " ))
		return ;
	std::cout << "Darkest secret : ";
	if (GetTheLine( i, 5 , "Darkest secret : " ))
		return ;
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
	if (std::cin.fail() || index > aktive || index < 1 )
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	std::cin.ignore();
	DisplayData( index );
	return ;
}

void PhoneBook::DisplayData( int index ) {
	std::cout << "First name : " << PhoneBook::contact[index - 1].getContact( 1 ) << std::endl
			  << "Last name : " << PhoneBook::contact[index - 1].getContact( 2 ) << std::endl
			  << "Nickname : " << PhoneBook::contact[index - 1].getContact( 3 ) << std::endl
			  << "Phone number: " << PhoneBook::contact[index - 1].getContact( 4 ) << std::endl
			  << "Darkest secret : " << PhoneBook::contact[index - 1].getContact( 5 ) << std::endl;
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
