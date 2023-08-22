/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:58:10 by pollo             #+#    #+#             */
/*   Updated: 2023/08/22 15:53:30 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->fixedValue = 0;
}

Fixed::Fixed(const int value) {
	this->fixedValue = value << NUM_BITS_FRAC;
}

Fixed::Fixed(const float value) {
	this->fixedValue = roundf(value * (1 << NUM_BITS_FRAC));
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& other) {
	this->fixedValue = other.fixedValue;
}

int	Fixed::getRawBits( void ) const {
	return this->fixedValue;
}

void	Fixed::setRawBits ( int const raw ) {
	this->fixedValue = raw;
}

float	Fixed::toFloat( void ) const {
	int intergerPart = this->fixedValue >> NUM_BITS_FRAC;
	int fractionalPart = this->fixedValue & ((1 << NUM_BITS_FRAC) - 1);
	float floatFractional = (float)fractionalPart / (1 << NUM_BITS_FRAC);

	return (float)intergerPart + floatFractional;
}

int	Fixed::toInt( void ) const {
	float floatValue = toFloat();
	return (int)roundf(floatValue);
}

Fixed&	Fixed::operator=(const Fixed& other) {
	this->fixedValue = other.fixedValue;
	return *this;
}


// comparison operations
bool	Fixed::operator>(const Fixed& other) const {
	return this->fixedValue > other.fixedValue;
}

bool	Fixed::operator<(const Fixed& other) const {
	return this->fixedValue < other.fixedValue;
}

bool	Fixed::operator>=(const Fixed& other) const {
	return this->fixedValue >= other.fixedValue;
}

bool	Fixed::operator<=(const Fixed& other) const {
	return this->fixedValue <= other.fixedValue;
}

bool	Fixed::operator==(const Fixed& other) const {
	return this->fixedValue == other.fixedValue;
}

bool	Fixed::operator!=(const Fixed& other) const {
	return this->fixedValue != other.fixedValue;
}


// arithmetic operators

float	Fixed::operator+(const Fixed& other) {
	return this->toFloat() + other.toFloat();
}

float	Fixed::operator-(const Fixed& other) {
	return this->toFloat() - other.toFloat();
}

float	Fixed::operator*(const Fixed& other) {
	return this->toFloat() * other.toFloat();
}

float	Fixed::operator/(const Fixed& other) {
	return this->toFloat() / other.toFloat();
}

Fixed&	Fixed::operator++() {
	this->fixedValue += 1; 
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed temp;
	temp.fixedValue = this->fixedValue++;
	return temp;
}

Fixed&	Fixed::operator--() {
	this->fixedValue -= 1;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed temp;
	temp.fixedValue = this->fixedValue--;
	return temp;
}

Fixed	Fixed::min(const Fixed& first, const Fixed& second) {
	return (first.toFloat() < second.toFloat()) ? first : second;
}

Fixed	Fixed::max(const Fixed& first, const Fixed& second) {
	return (first.toFloat() > second.toFloat()) ? first : second;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixedValue) {
	out << fixedValue.toFloat();
	return out;
}