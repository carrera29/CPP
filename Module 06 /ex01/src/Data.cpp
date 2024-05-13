/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:06:48 by pollo             #+#    #+#             */
/*   Updated: 2024/05/13 22:06:50 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
	std::cout << "Data Default constructor called" << std::endl;
}

Data::~Data() {
	std::cout << "Data Default destructor called" << std::endl;
}

Data::Data(const Data& other) {
	std::cout << "Data Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Data& Data::operator=(const Data& other) {
	std::cout << "Data Copy assignment called" << std::endl;
	if (this != &other) {
		this->charValue = other.charValue;
		this->intValue = other.intValue;
		this->floatValue = other.floatValue;
		this->doubleValue = other.doubleValue;
	}
	return *this;
}
