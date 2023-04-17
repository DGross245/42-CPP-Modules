/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:13:17 by dna               #+#    #+#             */
/*   Updated: 2023/04/17 15:45:11 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H

# define DATA_H

# include <string>

class Data {

public:

	~Data( void );
	Data( Data const &obj );
	Data &operator=( Data const &obj );
	static std::string getInfo( void );
	Data( std::string input );
	
private:

	Data( void );
	std::string Information;

};

#endif