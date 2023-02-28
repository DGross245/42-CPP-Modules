/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:57:02 by dgross            #+#    #+#             */
/*   Updated: 2023/02/28 06:08:05 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	this->Attack_dmg = 20;
	this->Hit_points = 100;
	this->Energy_points = 50;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string Name ) {
	this->Name = Name;
	std::cout << "User-defined constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap &obj ) {
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void ) {
	return ;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &instance) {
	this->Name = instance.Name;
	this->Hit_points = instance.Hit_points;
	this->Attack_dmg = instance.Attack_dmg;
	this->Energy_points = instance.Energy_points;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void ScavTrap::attack( std::string const &target ) {
	if (this->Hit_points == 0)
		return ;
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

void ScavTrap::takeDamage( unsigned int amount ) {
	if (this->Hit_points == 0)
	{
		std::cout << "ScavTrap " << this->Name <<  " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->Name <<  " takes " << amount << " points of damage!" << std::endl;
	this->Hit_points -= amount;
	if (this->Hit_points == 0)
		std::cout << "ScavTrap " << this->Name <<  " died!" << std::endl;
	return ;
}

void ScavTrap::beRepaired( unsigned int amount ) {
	if (this->Hit_points == 0)
		return ;
	else if (this->Energy_points == 0)
	{
		std::cout << "ScavTrap " << this->Name << " has no Energy to repair itself!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ScavTrap " << this->Name <<  " raipares it self by +" << amount << " Hit points!" << std::endl;
		this->Hit_points += amount;
	}
	return ;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->Name <<  " is now in Gatekeeper mode!" << std::endl;
	return ;
}