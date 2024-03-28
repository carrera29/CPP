/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:40:23 by pollo             #+#    #+#             */
/*   Updated: 2024/03/25 19:03:23 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
	std::cout << "\033[1;33mCat Default constructor called\033[0m" << std::endl;
	this->catBrain = new Brain;
}

Cat::~Cat() {
	std::cout << "\033[1;33mCat Destructor called\033[0m" << std::endl;
	delete this->catBrain;
}

Cat::Cat(const Cat& other) {
	*this = other;
	std::cout << "\033[1;33mCat Copy constructor called\033[0m" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "\033[1;33mAssignation operator called\033[0m" << std::endl;
	this->type = other.type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "\033[1;33m Miau!\033[0m" << std::endl;
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