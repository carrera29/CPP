/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:00 by pollo             #+#    #+#             */
/*   Updated: 2023/12/28 19:06:50 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "\033[1;31mAAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string Animal) : type(Animal) {
	std::cout << "\033[1;31mAAnimal Default constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "\033[1;31mAAnimal Destructor constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
	*this = other;
	std::cout << "\033[1;31mAAnimal Assignation operator called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other) {
	std::cout << "\033[1;31mAAnimal Assignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

std::string AAnimal::getType() const{
	return this->type;
}

void AAnimal::makeSound() const {
	std::cout << "\033[1;31m..." << std::endl;
}


//-------------- DOG ---------------

Dog::Dog() : AAnimal("dog") {
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

Cat::Cat() : AAnimal("cat") {
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
	std::cout << "\033[1;33mMiau!" << std::endl;
}
