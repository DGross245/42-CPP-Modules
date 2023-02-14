/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:16:55 by dgross            #+#    #+#             */
/*   Updated: 2023/02/14 17:37:02 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>

class Contact {
	
public:

	Contact();
	~Contact();
	void setContact( const std::string& str, int i );
	std::string getContact( int i );

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

class PhoneBook {


public:

				PhoneBook( );
				~PhoneBook ( );
	void		DisplayBook( int index, std::string firstName, std::string lastName, std::string Nickname );
	void		AddContact( int i );
	void		SearchContact( void );
	std::string	CheckNumber( std::string str );
	std::string CheckLenght( std::string str );
	void		DisplayData( int index );

private:
	Contact contact[8];
	int		aktive;
};


#endif