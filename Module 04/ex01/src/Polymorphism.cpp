/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:00 by pollo             #+#    #+#             */
/*   Updated: 2024/01/03 12:31:13 by pollo            ###   ########.fr       */
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
	this->dogBrain = new Brain;
}

Dog::~Dog() {
	std::cout << "\033[1;32mDog Destructor called" << std::endl;
	delete this->dogBrain;
}

Dog::Dog(const Dog& other) {
	*this->dogBrain = *other.dogBrain;
	std::cout << "\033[1;32mDog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "\033[1;33mDog assignation operator called" << std::endl;
	this->type = other.type;
	*this->dogBrain = *other.dogBrain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "\033[1;32mGuau!" << std::endl;
}

void Dog::getIdea() {
	std::string idea;

	for (int i = 0; i < 100; i++) {
		if (!this->dogBrain->ideas[i].empty()) {
			idea += this->dogBrain->ideas[i];
		}
		else {
			break;
		}
	}
	std::cout << idea << std::endl;
}

void Dog::putIdea(const std::string& newIdea) {
	*this->dogBrain->ideas = newIdea;
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

Cat& Cat::operator=(const Cat& other) {
	std::cout << "\033[1;33mCat assignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "\033[1;33Miau!" << std::endl;
}

void Cat::getIdea() {
	std::string idea;

	for (int i = 0; i < 100; i++) {
		if (!this->catBrain->ideas[i].empty()) {
			idea += this->catBrain->ideas[i];
		}
		else {
			break;
		}
	}
	std::cout << idea << std::endl;
}

void Cat::putIdea(const std::string& newIdea) {
	*this->catBrain->ideas = newIdea;
}