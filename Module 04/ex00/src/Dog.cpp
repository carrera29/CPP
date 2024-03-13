/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:39:06 by pollo             #+#    #+#             */
/*   Updated: 2024/02/16 16:02:34 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

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

Dog&	Dog::operator=(const Dog& other) {
	std::cout << "\033[1;32mAssignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "\033[1;32m Guau!" << std::endl;
}
