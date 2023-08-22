/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:58:10 by pollo             #+#    #+#             */
/*   Updated: 2023/08/21 11:45:27 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed&	other) : fixedValue(other.fixedValue) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixedValue = other.fixedValue;
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixedValue;
}

void Fixed::setRawBits ( int const raw ) {
	if ((raw >= 0) && raw < (1 << NUM_BITS_FRAC)) {
		std::cout << "setRawBits member function called" << std::endl;
		this->fixedValue = raw;
	}
	else
		std::cout << "Invalid value. Value must be in the range [0 - " << (1 << NUM_BITS_FRAC) - 1 << "]" << std::endl;
}
