/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:14:32 by pollo             #+#    #+#             */
/*   Updated: 2023/08/31 16:26:24 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name)
	: ClapTrap(Name + "_clap_name"), ScavTrap(Name), FragTrap(Name), Name(Name) {
	FragTrap::Hit = 100;
	ScavTrap::Energy = 50;
	FragTrap::Attack = 30;
	std::cout << "\033[1;33mDiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[1;33mDiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	*this = other;
	std::cout << "\033[1;33mClapTrap Copy constructor called" << std::endl;
}

void DiamondTrap::DiamondTrap::whoAmI(void) {
	std::cout << "\033[1;33m... I'm " << this->Name << ", and also I'm " 
	<< ClapTrap::Name << std::endl;
}
