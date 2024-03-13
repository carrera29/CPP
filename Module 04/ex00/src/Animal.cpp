/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:37:52 by pollo             #+#    #+#             */
/*   Updated: 2024/02/16 16:02:51 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "\033[1;31mAnimal Default constructor called" << std::endl;
}

Animal::Animal(const std::string Animal) : type(Animal) {
	std::cout << "\033[1;31mAnimal Default constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "\033[1;31mAnimal Destructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "\033[1;31mAnimal Copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	std::cout << "\033[1;31mAssignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void Animal::makeSound() const{
	std::cout << "\033[1;31m ..." << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}
