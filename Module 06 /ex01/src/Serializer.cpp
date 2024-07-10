/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:16:01 by pollo             #+#    #+#             */
/*   Updated: 2024/05/14 08:41:11 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Serializer Default constructor called" << std::endl;
}

Serializer::~Serializer() {
	std::cout << "Serializer Default destructor called" << std::endl;
}

Serializer::Serializer(const Serializer& other) {
	std::cout << "Serializer Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Serializer& Serializer::operator=(const Serializer& other) {
	std::cout << "Serializer Copy assignment called" << std::endl;
	(void)other;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
