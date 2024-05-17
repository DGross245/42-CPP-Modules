/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:13:17 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:16:41 by dgross           ###   ########.fr       */
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