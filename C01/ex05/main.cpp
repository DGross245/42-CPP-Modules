/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:16:27 by dna               #+#    #+#             */
/*   Updated: 2023/02/20 21:27:31 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Harl.hpp"

int main ( void )
{
	Harl		SomeoneUKnow;

    SomeoneUKnow.complain("DEBUG");
    SomeoneUKnow.complain("INFO");
    SomeoneUKnow.complain("WARNING");
    SomeoneUKnow.complain("ERROR");
    SomeoneUKnow.complain("UNKNOWN");
	return (0);
}
