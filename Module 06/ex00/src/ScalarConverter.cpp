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

bool isPrintable(const char c) {
	return (c >= 32 && c <= 126);
}

int	specialCases(const std::string& literal) {

	int n = literal.length();

	if (n == 1 && isPrintable(literal[0])) {
		if (!isdigit(literal[0]))
			return (0);
		return (1);
	}
	else if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return (3);
	else if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return (2);
	return (4);
}

int defineType(const std::string& literal) {

	std::istringstream ss;
	size_t n = literal.length();
	int type = specialCases(literal);

	if (type != 4)
		return (type);
	for (size_t i = 0; i < n; i++) {
		if (!isPrintable(literal[i]))
			return (4);
		else if ((isdigit(literal[i]) && type != 3) || 
			(literal[0] == '-' && isdigit(literal[1])) || 
			(literal[0] == '+' && isdigit(literal[1])))
				type = 1;
		else if (literal[i] == '.') {
			if (isdigit(literal[i + 1]) && type == 1)
				type = 3;
			else
				return (4);
		}
		else if (literal[i] == 'e' && type == 3) {
			i++;
			if ((isdigit(literal[i])) ||
				(literal[i] == '+' && isdigit(literal[i + 1])) || 
				(literal[i] == '-' && isdigit(literal[i + 1])))
					type = 3;
			else
				return (4);
		}
		else if (isdigit(literal[i]) && type == 3)
			type = 3;
		else if (literal[i] == 'f' && (n == i + 1) && type == 3)
			type = 2;
		else
			return (4);
	}
	return (type);
}

void	charConvert(const std::string& literal, const std::string& type) {

	if (type == "char")
		std::cout << "char: " << literal[0] << std::endl;
	else {
		try {
			int	intValue = std::stoi(literal);
			if (intValue >= 32 && intValue <= 126)
				std::cout << "char: " << static_cast<char>(intValue) << std::endl;
			else
				std::cout << "char: impossible" << std::endl;
		} catch (...) {
			std::cout << "char: impossible" << std::endl;
		}
	}
}

void	intConvert(const std::string& literal, const std::string& type) {

	if (type == "double" || type == "float" || type == "int") {
		try {
			int	intValue = std::stoi(literal);
			std::cout << "int: " << intValue << std::endl;
		}
		catch (const std::invalid_argument& e) {
			std::cout << "int: " << e.what() << std::endl;
		}
		catch (const std::out_of_range& e) {
			std::cout << "int: " << e.what() << std::endl;
		}
	}
	else
		std::cout << "int: " << "impossible" << std::endl;
}

void	floatConvert(const std::string& literal, const std::string& type) {

	if (type == "double" || type == "float" || type == "int") {
		try {
			float	floatValue = std::stof(literal);
			std::cout << "float: " << floatValue << std::endl;
		}
		catch (const std::invalid_argument& e) {
			std::cout << "float: " << e.what() << std::endl;
		}
		catch (const std::out_of_range& e) {
			std::cout << "float: " << e.what() << std::endl;
		}
	}
	else
		std::cout << "float: " << "impossible" << std::endl;
}

void	doubleConvert(const std::string& literal, const std::string& type) {

	if (type == "double" || type == "float" || type == "int") {
		try {
			double	doubleValue = std::stod(literal);
			std::cout << "double: " << doubleValue << std::endl;
		}
		catch (const std::invalid_argument& e) {
			std::cout << "double: " << e.what() << std::endl;
		}
		catch (const std::out_of_range& e) {
			std::cout << "double: " << e.what() << std::endl;
		}
	}
	else
		std::cout << "double: " << "impossible" << std::endl;
}

void transcripcionType(const std::string& literal, const std::string& type) {

	charConvert(literal, type);
	intConvert(literal, type);
	floatConvert(literal, type);
	doubleConvert(literal, type);
}

void ScalarConverter::convert(const std::string& literal) {

	std::string	type[5] = { "char", "int", "float", "double", "not valid" };
	
	int nType = defineType(literal);
	transcripcionType(literal, type[nType]);

}
