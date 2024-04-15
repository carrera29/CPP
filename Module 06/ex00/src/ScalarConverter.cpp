/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:35:16 by pollo             #+#    #+#             */
/*   Updated: 2024/04/07 18:47:12 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter Default destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	std::cout << "ScalarConverter Copy assignment called" << std::endl;
	(void)other;
	return *this;
}

int	isChar(const std::string& literal) {
	int n = literal.length();
	if (n == 1 && !isdigit(literal[0]))
		return (1);
	return (0);
}

int	isInt(const std::string& literal, int *type, int i) {
	if ((isdigit(literal[i]) && *type != 3) || (literal[0] == '-' && isdigit(literal[1])))
		return (*type = 1, 1);
	return (0);
}

int	isDouble(const std::string& literal, int *type, int i) {
	if (literal[i] == '.')
		if (isdigit(literal[i + 1]) && *type == 1)
			return (*type = 3, 1);
	if ((literal[i] == 'e') && *type == 3) {
		i++;
		if (isdigit(literal[i]) ||
		(literal[i] == '+' && isdigit(literal[i + 1])) || 
		(literal[i] == '-' && isdigit(literal[i + 1])))
			return (*type = 3, 1);
	}
	else if ((isdigit(literal[i])) && *type == 3)
		return (*type = 3, 1);
	else if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return (*type = 3, 1);
	return (0);
}

int	isFloat(const std::string& literal, int *type, int i) {
	int n = literal.length();

	if ((literal[i] == 'f') && (n == i + 1) && (*type == 3))
		return (*type = 2, 1);
	else if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return (*type = 2, 1);
	return (0);
}

bool isPrintable(const char c) {
	return (c >= 32 && c <= 126);
}

int defineType(const std::string& literal) {

	std::istringstream ss;
	int	type = 4;
	size_t n = literal.length();

	if (isChar(literal))
		return (0);
	for (size_t i = 0; i < n; i++) {
		if (!isPrintable(literal[i]))
			return (4);
		size_t cpy_i = i;
		i += isInt(literal, &type, i);
		i += isDouble(literal, &type, i);
		i += isFloat(literal, &type, i);
		if (cpy_i == i)
			return (4);
	}
	return (type);
}

void ScalarConverter::convert(const std::string& literal) {

	std::string	type[5] = { "char", "int", "float", "double", "not valid" };
	
	int nType = defineType(literal);
	std::cout << type[nType] << std::endl;
}
