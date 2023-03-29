/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:17:12 by dna               #+#    #+#             */
/*   Updated: 2023/03/29 07:23:54 by dna              ###   ########.fr       */
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