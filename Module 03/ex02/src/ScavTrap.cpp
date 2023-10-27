/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:55:24 by pollo             #+#    #+#             */
/*   Updated: 2023/10/27 20:15:02 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const char* newName) : ClapTrap(newName) {
	this->Hit = 100;
	this->Energy = 50;
	this->Attack = 20;
	std::cout << "\033[1;34mScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "\033[1;34mScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	this->Name = other.Name;
	this->Hit = other.Hit;
	this->Energy = other.Energy;
	this->Attack = other.Attack;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[1;34mScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->Energy > 0 && this->Hit > 0) {
		this->Energy -= 1;
		std::cout << "\033[1;34m>>ScavTrap " << Name << " attacks " << target 
		<< ", causing " << this->Attack << " points of damage!" << std::endl;
	}
	else if (this->Energy <= 0)
		std::cout << "\033[1;34m>>ScavTrap " << Name 
		<< " has low energy to be able to attack, recharge!" << std::endl;
	else
		std::cout << "\033[1;34m>>ScavTrap " << Name
		<< " does not have hit points left to be able to attack" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "\033[1;34m... ScavTrap " << this->Name << " is now in Gate, in keeper mode." << std::endl;
}
