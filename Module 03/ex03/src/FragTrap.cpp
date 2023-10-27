/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:34:44 by pollo             #+#    #+#             */
/*   Updated: 2023/10/27 20:20:45 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string newName) : ClapTrap(newName) {
	this->Hit = 100;
	this->Energy = 100;
	this->Attack = 30;
	std::cout << "\033[1;31mFragTrap Default constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\033[1;31mFragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "\033[1;31mFragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	this->Name = other.Name;
	this->Hit = other.Hit;
	this->Energy = other.Energy;
	this->Attack = other.Attack;
	return *this;
}

void FragTrap::highFivesGuys(void) {
	if (this->Hit > 0 && this->Energy > 0)
		std::cout << "\033[1;31m... Hight five!" << std::endl;
	else
		std::cout << "\033[1;31m ..." << std::endl;
}