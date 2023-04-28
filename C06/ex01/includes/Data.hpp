/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:13:17 by dna               #+#    #+#             */
/*   Updated: 2023/04/28 11:36:31 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H

# define DATA_H

# include <string>

class Data {

public:

	Data( void );
	~Data( void );
	Data( Data const &obj );
	Data &operator=( Data const &obj );
	std::string getInfo( void ) const;
	Data( std::string input );
	
private:

	std::string Information;

};

std::ostream &operator<<( std::ostream &output, Data const &obj );
std::ostream &operator<<( std::ostream &output, Data const *obj );

#endif