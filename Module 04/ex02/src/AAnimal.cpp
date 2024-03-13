/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:37:52 by pollo             #+#    #+#             */
/*   Updated: 2024/02/16 16:02:51 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	std::cout << "\033[1;31mAAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string AAnimal) : type(AAnimal) {
	std::cout << "\033[1;31mAAnimal Default constructor called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "\033[1;31mAAnimal Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
	*this = other;
	std::cout << "\033[1;31mAAnimal Copy constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other) {
	std::cout << "\033[1;31mAssignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void AAnimal::makeSound() const{
	std::cout << "\033[1;31m ..." << std::endl;
}

std::string AAnimal::getType() const{
	return this->type;
}
