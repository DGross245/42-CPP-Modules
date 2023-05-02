/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:16:55 by dgross            #+#    #+#             */
/*   Updated: 2023/05/02 15:51:29 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <string>

class PhoneBook {


public:

				PhoneBook( void );
				~PhoneBook ( void );
	void		DisplayBook( int index, std::string firstName, std::string lastName, std::string Nickname );
	void		AddContact( int i );
	void		SearchContact( void );
	std::string CheckLenght( std::string str );
	int			GetTheLine( int i, int nbr, std::string msg );
	void		DisplayData( int index );

private:

	Contact contact[8];
	int		active;

};


#endif