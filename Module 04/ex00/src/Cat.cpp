/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:40:23 by pollo             #+#    #+#             */
/*   Updated: 2024/02/16 16:02:42 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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

Cat& Cat::operator=(const Cat& other) {
	std::cout << "\033[1;33mAssignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "\033[1;33m Miau!" << std::endl;
}
