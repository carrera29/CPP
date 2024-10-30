/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:33:01 by pollo             #+#    #+#             */
/*   Updated: 2024/10/30 18:44:17 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int fromStringToInt(const std::string& literal) {
    char* end;
    long value = std::strtol(literal.c_str(), &end, 10);

    if (*end != '\0')
        throw std::invalid_argument("Invalid integer value");
    if (value >= std::numeric_limits<int>::max() || value <= std::numeric_limits<int>::min())
        throw std::out_of_range("Integer value out of range");
    return static_cast<int>(value);
}

int main(int argc, char* argv[]) {

    std::vector<int> InputV;
    std::list<int> InputL;

    if (argc > 1) {
    
        for (int i = 1; i < argc; ++i) {
            try {
                int number = fromStringToInt(argv[i]);
                if (number < 0) {
                    std::cout << "Error" << std::endl;
                    return (1);
                }
                InputV.push_back(number);
                InputL.push_back(number);
            
            } catch (const std::invalid_argument& e) {
                std::cerr << "Error: just int numbers." << std::endl;
                return (1);
            } catch (const std::out_of_range& e) {
                std::cerr << "Error: Number out of range." << std::endl;
                return (1);
            }
        }
        printer(InputV, InputL, argc - 1);
    }
    else
        std::cout << "Error: please enter the operations" << std::endl;
    
    return (0);
}