/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:57:14 by dgross            #+#    #+#             */
/*   Updated: 2023/04/07 22:05:47 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	this->Name = "ScavDefault";
	this->Attack_dmg = 20;
	this->Hit_points = 100;
	this->Energy_points = 50;
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string Name ) : ClapTrap( Name ) {
	this->Name = Name;
	this->Attack_dmg = 20;
	this->Hit_points = 100;
	this->Energy_points = 50;
	std::cout << "ScavTrap user-defined constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap &obj ) : ClapTrap( obj ) {
	*this = obj;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &instance) {
	this->Name = instance.Name;
	this->Hit_points = instance.Hit_points;
	this->Attack_dmg = instance.Attack_dmg;
	this->Energy_points = instance.Energy_points;
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

void ScavTrap::attack( std::string const &target ) {
	if (this->Hit_points == 0)
		std::cout << "ScavTrap " << this->Name << " has no hit point and cant attack " << target << " !" << std::endl;
	else if (this->Energy_points == 0)
	{
		std::cout << "ScavTrap " << this->Name << " has no Energy to attack " << target << " !" << std::endl;
		return ;
	}
	else
	{
		this->Energy_points -= 1;
		std::cout << "ScavTrap " << this->Name <<  " attacks " << target << " , causing " << this->Attack_dmg << " points of damage!" << std::endl;
	}
	return ;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->Name <<  " is now in Gatekeeper mode!" << std::endl;
	return ;
}
