/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:41:02 by pollo             #+#    #+#             */
/*   Updated: 2024/10/27 18:20:25 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int fromStringToInt(const std::string& literal) {
    char* end;
    long value = std::strtol(literal.c_str(), &end, 10);

    if (*end != '\0')
        throw std::invalid_argument("Invalid integer value");
    if (value >= std::numeric_limits<int>::max() || value <= std::numeric_limits<int>::min())
        throw std::out_of_range("Integer value out of range");
    return static_cast<int>(value);
}

int ValidateElement(const std::string element) {

	if (element == "+" || element == "-" || element == "/" || element == "*")
		return (1);
	try {
		int number = fromStringToInt(element);
		if (number >= 0 && number <= 9)
			return (2);
	} catch (...) {}
	return (0);
}

RPN::RPN(const std::string input) {

	std::stringstream	ss(input);
	std::string			element;

	while (ss >> element) {
		
		int type = ValidateElement(element);
		if (type == 0) {
			std::cout << "Error" << std::endl;
			return;
		}
		else if (type == 1) {
			int first = operands.top(); operands.pop();
			int second = operands.top(); operands.pop();

			if (element == "+")
				operands.push(second + first);
			else if (element == "-")
				operands.push(second - first);
			else if (element == "*")
				operands.push(second * first);
			else if (element == "/")
				operands.push(second / first);
		}
		else
			operands.push(fromStringToInt(element));
	}
	std::cout << operands.top() << std::endl;
}

RPN::~RPN() {}
