/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:58:10 by pollo             #+#    #+#             */
/*   Updated: 2023/08/24 16:53:17 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() : fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedValue = value << NUM_BITS_FRAC;
	// value 42 (101010); fixedValue -> 101010(00000000)fractionalPart
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedValue = roundf(value * (1 << NUM_BITS_FRAC));
	// value 42.75 (101010 + 0.11); 
	// fixedValue ->	10101011 * (1 * 2^8); 
	// 					10101011 * 256; 
	// 					10101011 * 100000000 = 1010101100000000
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
}

int	Fixed::toInt( void ) const {
	return (int)roundf(this->toFloat());
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixedValue) {
	out << fixedValue.toFloat();
	return out;
}