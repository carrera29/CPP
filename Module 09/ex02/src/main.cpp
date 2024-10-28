/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:33:01 by pollo             #+#    #+#             */
/*   Updated: 2024/10/28 21:50:32 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::list<int>  fordJohnsonWithList(std::list<int> input) {

    std::list<int>  min, max;
    std::list<int>::iterator it = input.begin();

    while (it != input.end()) {

        int number1 = *it;
        ++it;
        
        if (it != input.end()) {
            int number2 = *it;
            if (number1 > number2)
                max.push_back(number1), min.push_back(number2);
            else
                max.push_back(number2), min.push_back(number1);
            ++it;
        }
        else
            max.push_back(number1);
    }
    max.sort();
    
    for (std::list<int>::iterator it = min.begin(); it != min.end(); ++it) {

        std::list<int>::iterator pos = max.begin();
        while ((pos != max.end()) && (*pos < *it))
            ++pos;
        max.insert(pos, *it);
    }
    return (max);
}

std::vector<int>    fordJohnsonWithVector(const std::vector<int> input) {

    std::vector<int>    min, max;

    for (size_t i = 0; i < input.size(); i+= 2) {
        if ((i + 1) < input.size()) {
            int number1 = input[i];
            int number2 = input[i + 1];

            if (number1 > number2)
                max.push_back(number1), min.push_back(number2);
            else
                max.push_back(number2), min.push_back(number1);
        }
        else
            max.push_back(input[i]);
    }

    std::sort(max.begin(), max.end());

    for (size_t i = 0; i < min.size(); ++i) {

        std::vector<int>::iterator pos = std::lower_bound(max.begin(), max.end(), min[i]);
        max.insert(pos, min[i]);
    }
    return (max);
}

int main(int argc, char* argv[]) {

    std::vector<int> vecInput;
    std::list<int> listInput;

    if (argc > 1) {
        
        for (int i = 1; i < argc; ++i) {
            try {
                int number = std::stoi(argv[i]);
                if (number < 0) {
                    std::cout << "Error: just positive numbers." << std::endl;
                    return (1);
                }
                vecInput.push_back(number);
                listInput.push_back(number);
            
            } catch (const std::invalid_argument& e) {
                std::cerr << "Error: just int numbers." << std::endl;
                return (1);
            } catch (const std::out_of_range& e) {
                std::cerr << "Error: Number out of range." << std::endl;
                return (1);
            }
        }
        std::cout << "Before: ";
        for (size_t i = 0; i < vecInput.size(); ++i)
            std::cout << vecInput[i] << " ";

        std::vector<int> Vecsorted = fordJohnsonWithVector(vecInput);
        std::list<int> Listsorted = fordJohnsonWithList(listInput);
        
        std::cout << "\nAfter: ";
        for (size_t i = 0; i < Vecsorted.size(); ++i)
            std::cout << Vecsorted[i] << " ";
        std::cout << std::endl;
        
        std::cout << "List After: ";
        for (std::list<int>::iterator it = Listsorted.begin(); it != Listsorted.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }
    else
        std::cout << "Error: please enter the operations" << std::endl;
    
    return (0);
}