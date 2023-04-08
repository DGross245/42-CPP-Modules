/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:53:09 by dna               #+#    #+#             */
/*   Updated: 2023/04/07 21:11:15 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap( void ) : ClapTrap() {
	this->Name = "default";
	this->Attack_dmg = 30;
	this->Hit_points = 100;
	this->Energy_points = 100;
	std::cout << "FragTrap default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string Name ) : ClapTrap(Name) {
	this->Name = Name;
	this->Attack_dmg = 30;
	this->Hit_points = 100;
	this->Energy_points = 100;
	std::cout << "FragTrap user-defined constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( const FragTrap &obj ) : ClapTrap(obj) {
	*this = obj;
	std::cout << "FragTrap copy constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=( FragTrap const &instance) {
	this->Name = instance.Name;
	this->Hit_points = instance.Hit_points;
	this->Attack_dmg = instance.Attack_dmg;
	this->Energy_points = instance.Energy_points;
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFiveGuys( void ) {
	std::cout << "Highfive" << std::endl;
	return ;
}