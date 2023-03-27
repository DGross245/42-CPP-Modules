/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:13:17 by dna               #+#    #+#             */
/*   Updated: 2023/03/27 13:35:55 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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

#endif