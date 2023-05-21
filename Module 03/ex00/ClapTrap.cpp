/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:00 by pollo             #+#    #+#             */
/*   Updated: 2023/05/12 17:44:50 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const char* name) : Name(name) {}

void ClapTrap::attack(const std::string& target){
	if (Energy > 0 && Hit > 0) {
		Energy -= 1;
		std::cout << ">>	ClapTrap " << Name << " attacks " << target <<
		", causing " << Attack << " points of damage!" << std::endl;
	}
	else {
		std::cout << ">>	ClapTrap " << Name
		<< " can't attack due to lack of energy or hit points." << std::endl;	
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (Energy > 0 && Hit > 0) {
		Hit -= amount;
		std::cout << ">>	ClapTrap " << Name
		<< " has been damage with " << amount << " points of damage." << std::endl;
	}
	else {
		std::cout << ">>	ClapTrap " << Name
		<< " has no hit points left." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (Energy > 0 && Hit > 0) {
		Energy -= 1;
		Hit += amount;
		std::cout << ">>	ClapTrap " << Name
		<< " is repaired and gains " << amount << " hit points." << std::endl;
	}
	else {
		std::cout << ">>	ClapTrap " << Name
		<< " can't be repair due to lack of energy or hit points.\n" << std::endl;
	}
};