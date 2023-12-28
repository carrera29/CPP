/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:00 by pollo             #+#    #+#             */
/*   Updated: 2023/12/27 21:39:02 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

Animal::Animal() {
	std::cout << "\033[1;31mAnimal Default constructor called" << std::endl;
}

Animal::Animal(std::string Animal) : type(Animal) {
	std::cout << "\033[1;31mAnimal Default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "\033[1;31mAnimal Destructor constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "\033[1;31mAnimal assignation operator called" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	this->type = other.type;
	return *this;
}

std::string Animal::getType() const{
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "\033[1;31m..." << std::endl;
}


//-------------- DOG ---------------

Dog::Dog() : Animal("dog") {
	std::cout << "\033[1;32mDog Default constructor called" << std::endl;
	try {
		this->dogBrain = new Brain;
	}
	catch(std::bad_alloc& e) {
		std::cout << "\033[1;32mMemory error: " << e.what() << std::endl;
	}
}

Dog::~Dog() {
	std::cout << "\033[1;32mDog Destructor called" << std::endl;
	delete this->dogBrain;
}

Dog::Dog(const Dog& other) {
	*this = other;
	std::cout << "\033[1;32mDog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "\033[1;33mDog assignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void Dog::makeSound() const {
std::cout << "\033[1;32mGuau!" << std::endl;
}


//-------------- CAT ---------------

Cat::Cat() : Animal("cat") {
	std::cout << "\033[1;33mCat Default constructor called" << std::endl;
	try {
		this->catBrain = new Brain;
	}
	catch(std::bad_alloc& e) {
		std::cout << "\033[1;32mMemory error: " << e.what() << std::endl;
	}
}

Cat::~Cat() {
	std::cout << "\033[1;33mCat Destructor called" << std::endl;
	delete this->catBrain;
}

Cat::Cat(const Cat& other) {
	*this = other;
	std::cout << "\033[1;33mCat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "\033[1;33mCat assignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "\033[1;33Miau!" << std::endl;
}
