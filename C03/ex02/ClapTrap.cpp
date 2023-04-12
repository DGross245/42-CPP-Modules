/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:55:19 by dgross            #+#    #+#             */
/*   Updated: 2023/04/12 16:51:16 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap( void ) {
	this->Name = "default";
	this->Attack_dmg = 0;
	this->Hit_points = 10;
	this->Energy_points = 10;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string Name ) {
	this->Name = Name;
	this->Attack_dmg = 0;
	this->Hit_points = 10;
	this->Energy_points = 10;
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
		std::cout << "ClapTrap " << this->Name << " has no hit point and cant attack " << target << " !" << std::endl;
	else if (this->Energy_points == 0)
		std::cout << "ClapTrap " << this->Name << " has no Energy to attack " << target << " !" << std::endl;
	else
	{
		this->Energy_points -= 1;
		std::cout << "ClapTrap " << this->Name <<  " attacks " << target << ", causing " << this->Attack_dmg << " points of damage!" << std::endl;
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
	if (amount > this->Hit_points)
		this->Hit_points = 0;
	else
		this->Hit_points -= amount;
	if (this->Hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->Name <<  " died!" << std::endl;
		this->Hit_points = 0;
	}
	return ;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	long long test = amount;
	test += this->Hit_points;
	if (test > 4294967295)
	{
		unsigned int i = 4294967295 - this->Hit_points;
		std::cout << "ClapTrap " << this->Name <<  " repairs it self by +" << i << " Hit points!" << std::endl;
		this->Hit_points = 4294967295;
		std::cout << "ClapTrap " << this->Name << " has max health!" << std::endl; 
		return ;	
	}
	if (this->Hit_points == 0)
		std::cout << "ClapTrap " << this->Name << " is dead and cant repair itself!" << std::endl;
	else if (this->Energy_points == 0)
		std::cout << "ClapTrap " << this->Name << " has no Energy to repair itself!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->Name <<  " repairs it self by +" << amount << " Hit points!" << std::endl;
		this->Hit_points += amount;
	}
	return ;
}
