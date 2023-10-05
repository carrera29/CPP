/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:58:10 by pollo             #+#    #+#             */
/*   Updated: 2023/09/27 12:25:30 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() : fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedValue = value << NUM_BITS_FRAC;
	// fixedValue = 42 << 8
	// fixedValue = 101010 << 8
	// fixedValue = (101010)(00000000) = 10752
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedValue = roundf(value * (1 << NUM_BITS_FRAC));
	// fixedValue = roundf(42.75 * (2^8);
	// fixedValue = roundf(42.75 * 256);
	// fixedValue = roundf(10944) = (101010)(11000000);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixedValue = other.fixedValue;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixedValue = other.fixedValue;
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedValue;
}

void Fixed::setRawBits ( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedValue = raw;
}

float	Fixed::toFloat( void ) const { 
	return (float)this->fixedValue / (float)(1 << NUM_BITS_FRAC);
	// (float)10101011000000 / (float)(2^8);
	// (float)10944 / (float)(256) = 42,75;
}

int	Fixed::toInt( void ) const {
	return (int)roundf(this->toFloat());
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixedValue) {
	out << fixedValue.toFloat();
	return out;
}