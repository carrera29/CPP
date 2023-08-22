/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:58:10 by pollo             #+#    #+#             */
/*   Updated: 2023/08/21 19:57:45 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fixedValue = 0;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedValue = value << NUM_BITS_FRAC;
	// 42 -> 10101000000000
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedValue = roundf(value * (1 << NUM_BITS_FRAC));
	// 42.75 -> 101010.11; 101010.11 * 2^8 = 10101011000000 -> fixedValue
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed&	other) : fixedValue(other.fixedValue){
	std::cout << "Copy constructor called" << std::endl;
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

float Fixed::toFloat( void ) const {
	int intergerPart = this->fixedValue >> NUM_BITS_FRAC;
	// intergerPart -> 10101011000000 >> 8 = 00000000101010 = 42
	int fractionalPart = this->fixedValue & ((1 << NUM_BITS_FRAC) - 1);
	// fractionalPart ->	10101011000000 AND 
	//						00000011111111
	//						---------------
	//						00000011000000
	float floatFractional = (float)fractionalPart / (1 << NUM_BITS_FRAC);
	// floatFractional -> 11000000 / 2^8 = 11000000 / 100000000 = 0.11
	return (float)intergerPart + floatFractional;
}

int Fixed::toInt( void ) const {
	float floatValue = toFloat();
	// fixedValue -> 10101011000000; 10101011000000 / 2^8 = 101010 -> 42
	return (int)roundf(floatValue);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixedValue) {
	out << fixedValue.toFloat();
	return out;
}