/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:16:27 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:08:59 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Harl.hpp"

int main ( void )
{
	Harl		SomeoneUKnow;

    SomeoneUKnow.complain( "DEBUG" );
    SomeoneUKnow.complain( "INFO" );
    SomeoneUKnow.complain( "WARNING" );
    SomeoneUKnow.complain( "ERROR" );
    SomeoneUKnow.complain( "DOESNTEXIST" );
	return (0);
}
