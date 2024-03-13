/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:39:06 by pollo             #+#    #+#             */
/*   Updated: 2024/03/13 21:15:26 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
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

Dog&	Dog::operator=(const Dog& other) {
	std::cout << "\033[1;32mAssignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "\033[1;32m Guau!" << std::endl;
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
