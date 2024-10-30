/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:41:02 by pollo             #+#    #+#             */
/*   Updated: 2024/10/30 19:20:38 by pollo            ###   ########.fr       */
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

int	operations(const int first, const int second, const std::string element) {

	int result = 0;

	if (element == "+")
		result = second + first;
	else if (element == "-")
		result = second - first;
	else if (element == "*")
		result = second * first;
	else if (element == "/") {
		if (first == 0)
			throw std::runtime_error("Error: division by zero");
		result = second / first;
	}
	return result;
}

void	RPN(const std::string input) {

	std::stack<int>		operands;
	std::stringstream	ss(input);
	std::string			element;

	while (ss >> element) {
		
		int type = ValidateElement(element);
		if (type == 0) {
			std::cout << "Error" << std::endl;
			return;
		}
		else if (type == 1) {
			if (operands.size() < 2) {
                std::cout << "Error: insufficient operands for operation" << std::endl;
                return;
            }
			int first = operands.top(); operands.pop();
			int second = operands.top(); operands.pop();
			operands.push(operations(first, second, element));
		}
		else
			operands.push(fromStringToInt(element));
	}
	if (operands.size() > 0)
        std::cout << operands.top() << std::endl;
    else 
        std::cout << "Error" << std::endl;
}
