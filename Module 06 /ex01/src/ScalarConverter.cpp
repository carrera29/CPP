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

void	fromChar(char c) {
	std::cout << "char: " << static_cast<char>(c) << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	fromInt(int n) {
	if (isprint(static_cast<int>(n)))
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
}

void	fromFloat(float f) {
	if (f >= std::numeric_limits<int>::min() &&
		f <= std::numeric_limits<int>::max() &&
		!std::isnan(abs(f)) && !std::isinf(abs(f))) {
			if (isprint(f))
				std::cout << "char: " << static_cast<char>(f) << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(f) << std::endl;
	} else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void	fromDouble(double d) {
	if (d >= std::numeric_limits<int>::min() &&
		d <= std::numeric_limits<int>::max() && 
		!std::isnan(abs(d)) && !std::isinf(abs(d))) {
			if (isprint(d))
				std::cout << "char: " << static_cast<char>(d) << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(d) << std::endl;
	} else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << std::endl;
}

void	notValid() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void transcripcionType(const std::string& literal, const std::string& type) {

	if (type == "char")
		fromChar(literal[0]);
	else if (type == "int") {
		try {
			fromInt(std::stoi(literal));
		} catch (const std::invalid_argument& e) {
			std::cout << "Error: " << e.what() << std::endl;
		} catch (const std::out_of_range& e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	} 
	else if (type == "float") {
		try {
			fromFloat(std::stof(literal));
		} catch (const std::invalid_argument& e) {
			std::cout << "Error: " << e.what() << std::endl;
		} catch (const std::out_of_range& e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	} 
	else if (type == "double") {
		try {
			fromDouble(std::stod(literal));
		} catch (const std::invalid_argument& e) {
			std::cout << "Error: " << e.what() << std::endl;
		} catch (const std::out_of_range& e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	else
		notValid();
}

int	specialCases(const std::string& literal) {

	int n = literal.length();

	if (n == 1 && isprint(literal[0])) {
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

	size_t n = literal.length();
	int	type;

	if ((type = specialCases(literal)) != 4)
		return (type);
	
	for (size_t i = 0; i < n; i++) {
		if (!isprint(literal[i]))
			return (4);
		else if ((isdigit(literal[i]) && type != 3) || 
			(i == 0 && literal[0] == '-' && isdigit(literal[1])) || 
			(i == 0 && literal[0] == '+' && isdigit(literal[1])))
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

void ScalarConverter::convert(const std::string& literal) {

	std::string	type[6] = { "char", "int", "float", "double", "not valid" };
	
	int nType = defineType(literal);
	// std::cout << literal << " type is " << type[nType] << std::endl;
	transcripcionType(literal, type[nType]);

}
