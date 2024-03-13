/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:37:52 by pollo             #+#    #+#             */
/*   Updated: 2024/02/16 14:38:27 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "\033[1;31mWrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string WrongAnimal) : type(WrongAnimal) {
	std::cout << "\033[1;31mWrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "\033[1;31mWrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
	std::cout << "\033[1;31mWrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "\033[1;31mAssignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << "\033[1;31m Wrong sound!" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}
