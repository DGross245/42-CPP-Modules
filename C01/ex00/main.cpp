/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:29:50 by dgross            #+#    #+#             */
/*   Updated: 2023/02/15 16:59:09 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie *kek;

	kek = NULL;
	kek = kek->newZombie( "Kek" );
	kek->announce();
	kek->randomChump( "random");
	delete kek;
	return (0);
}