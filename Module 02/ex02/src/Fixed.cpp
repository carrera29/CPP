/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:58:10 by pollo             #+#    #+#             */
/*   Updated: 2023/10/27 18:47:30 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedValue(0) {}

Fixed::Fixed(const int value) {
	this->fixedValue = value << NUM_BITS_FRAC;
}

Fixed::Fixed(const float value) {
	this->fixedValue = (int)roundf(value * (1 << NUM_BITS_FRAC));
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
	return (float)this->fixedValue / (float)(1 << NUM_BITS_FRAC);
}

int	Fixed::toInt( void ) const {
	return (int)roundf(this->toFloat());
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

Fixed	Fixed::operator+(const Fixed& other) {
	Fixed Result;
	Result.setRawBits(this->fixedValue + other.fixedValue);
	return Result;
}

Fixed	Fixed::operator-(const Fixed& other) {
	Fixed Result;
	Result.setRawBits(this->fixedValue - other.fixedValue);
	return Result;
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
	return (first.fixedValue < second.fixedValue) ? first : second;
}

Fixed	Fixed::max(const Fixed& first, const Fixed& second) {
	return (first.fixedValue > second.fixedValue) ? first : second;
}

std::ostream& operator<<(std::ostream& out, const Fixed& other) {
	out << other.toFloat();
	return out;
}