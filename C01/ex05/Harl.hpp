/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:17:12 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:08:52 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HARL_H
# define HARL_H

# include <string>

class Harl {

public:

	void complain( std::string level );
	Harl( void );
	~Harl( void );

private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

};

#endif