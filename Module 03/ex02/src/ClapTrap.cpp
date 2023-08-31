/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:00 by pollo             #+#    #+#             */
/*   Updated: 2023/08/30 16:57:38 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const char* newName) : Name(newName), Hit(10), Energy(10), Attack(0) {
	std::cout << "\033[1;32mClapTrap Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[1;32mClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	std::cout << "\033[1;32mClapTrap Copy constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->Energy > 0 && this->Hit > 0) {
		this->Energy -= 1;
		std::cout << "\033[1;34m>>ClapTrap " << Name << " attacks " << target 
		<< ", causing " << this->Attack << " points of damage!" << std::endl;
	}
	else if (this->Energy <= 0)
		std::cout << "\033[1;34m>>ClapTrap " << Name 
		<< " has low energy to be able to attack, recharge!" << std::endl;
	else
		std::cout << "\033[1;34m>>ClapTrap " << Name
		<< " does not have hit points left to be able to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->Hit > 0) {
		if (Hit >= amount) {
			std::cout << "\033[1;31m>>ClapTrap " << Name << " has been damage with " 
			<< amount << " points of damage." << std::endl;
			this->Hit -= amount;
		}
		else {
			std::cout << "\033[1;31m>>ClapTrap " << Name << " has been damage with " 
			<< this->Hit << " points of damage." << std::endl;
			this->Hit = 0;
		}
	}
	else
		std::cout << "\033[1;31m>>ClapTrap " << Name << " has no hit points left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (Energy > 0 && Hit > 0) {
		Energy -= 1, Hit += amount;
		std::cout << "\033[1;32m>>ClapTrap " << Name << " is repaired and gains " 
		<< amount << " hit points." << std::endl;
	}
	else
		std::cout << "\033[1;31m>>ClapTrap " << Name << " can't be repair due to lack of energy or hit points." << std::endl;
}

void ClapTrap::getValues(const ClapTrap& name) {
	std::cout << "\033[1;34m\nClapTrap " << name.Name << " is :" << std::endl
	<< " Hit	" << name.Hit << std::endl
	<< " Energy	" << name.Energy << std::endl
	<< " Attack	" << name.Attack << std::endl << std::endl;
}
