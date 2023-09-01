/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:00 by pollo             #+#    #+#             */
/*   Updated: 2023/09/01 12:01:47 by clcarrer         ###   ########.fr       */
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
	std::cout << "\033[1;31mAnimal Copy constructor called" << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "\033[1;31m... muuuh ..." << std::endl;
}


//-------------- DOG ---------------

Dog::Dog() : Animal("dog") {
	std::cout << "\033[1;32mDog Default constructor called" << std::endl;
	this->dogBrain = new Brain;
}

Dog::~Dog() {
	std::cout << "\033[1;32mDog Destructor called" << std::endl;
	delete this->dogBrain;
}

Dog::Dog(const Dog& other) {
	*this = other;
	std::cout << "\033[1;32mDog Copy constructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "\033[1;32m... guau ..." << std::endl;
}


//-------------- CAT ---------------

Cat::Cat() : Animal("cat") {
	std::cout << "\033[1;33mCat Default constructor called" << std::endl;
	this->catBrain = new Brain;
}

Cat::~Cat() {
	std::cout << "\033[1;33mCat Destructor called" << std::endl;
	delete this->catBrain;
}

Cat::Cat(const Cat& other) {
	*this = other;
	std::cout << "\033[1;33mCat Copy constructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "\033[1;33m... miau ..." << std::endl;
}
