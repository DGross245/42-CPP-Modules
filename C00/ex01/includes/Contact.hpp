/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:10:10 by dgross            #+#    #+#             */
/*   Updated: 2023/03/27 09:12:36 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H

# define CONTACT_H

# include <string>

class Contact {
	
public:

	Contact( void );
	~Contact( void );
	void setContact( const std::string &str, int i );
	std::string getContact( int i );

private:

	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

};

#endif