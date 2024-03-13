/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:40:23 by pollo             #+#    #+#             */
/*   Updated: 2024/02/16 14:40:38 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "\033[1;33mWrongCat Default constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "\033[1;33mWrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	*this = other;
	std::cout << "\033[1;33mWrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "\033[1;33mAssignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "\033[1;33m Wrong miau!" << std::endl;
}
