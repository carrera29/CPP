/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:52:08 by pollo             #+#    #+#             */
/*   Updated: 2023/08/31 17:56:30 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

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

void Animal::makeSound() const{
	std::cout << "\033[1;31m ... buuuuuuuh ..." << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}


// ---------- DOG --------

Dog::Dog() : Animal("Dog") {
	std::cout << "\033[1;32mDog Default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "\033[1;32mDog Destructor called" << std::endl;
}

Dog::Dog(const Dog& other) {
	*this = other;
	std::cout << "\033[1;32mDog Copy constructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "\033[1;32m ... Guau ..." << std::endl;
}


// ---------- CAT --------

Cat::Cat() : Animal("Cat") {
	std::cout << "\033[1;33mCat Default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "\033[1;33mCat Destructor called" << std::endl;
}

Cat::Cat(const Cat& other) {
	*this = other;
	std::cout << "\033[1;33mCat Copy constructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "\033[1;33m ... Miau ..." << std::endl;
}
