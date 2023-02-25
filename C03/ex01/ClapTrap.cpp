/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:55:51 by dgross            #+#    #+#             */
/*   Updated: 2023/02/25 10:55:53 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap( void ) {
	this->Attack_dmg = 10;
	this->Hit_points = 10;
	this->Energy_points = 10;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string Name ) {
	this->Name = Name;
	std::cout << "User-defined constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap &obj ) {
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &instance) {
	this->Name = instance.Name;
	this->Hit_points = instance.Hit_points;
	this->Attack_dmg = instance.Attack_dmg;
	this->Energy_points = instance.Energy_points;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void ClapTrap::attack( std::string const &target ) {
	if (this->Hit_points == 0)
		return ;
	else if (this->Energy_points == 0)
	{
		std::cout << "ClapTrap " << this->Name << " has no Energy to attack " << target << " !" << std::endl;
		return ;
	}
	else
	{
		this->Energy_points -= 1;
		std::cout << "ClapTrap " << this->Name <<  " attacks " << target << " , causing " << this->Attack_dmg << " points of damage!" << std::endl;
	}
	return ;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->Hit_points == 0)
	{
		std::cout << "ClapTrap " << this->Name <<  " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name <<  " takes " << amount << " points of damage!" << std::endl;
	this->Hit_points -= amount;
	if (this->Hit_points == 0)
		std::cout << "ClapTrap " << this->Name <<  " died!" << std::endl;
	return ;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->Hit_points == 0)
		return ;
	else if (this->Energy_points == 0)
	{
		std::cout << "ClapTrap " << this->Name << " has no Energy to repair itself!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->Name <<  " raipares it self by +" << amount << " Hit points!" << std::endl;
		this->Hit_points += amount;
	}
	return ;
}