/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:30:11 by pollo             #+#    #+#             */
/*   Updated: 2024/10/30 18:46:18 by pollo            ###   ########.fr       */
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

std::vector<int>    fordJohnsonWithVector(std::vector<int> input) {

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

void printer(std::vector<int> inputV, std::list<int> inputL, int numbers) {

	std::cout << "Before: ";
	for (size_t i = 0; i < inputV.size(); ++i)
		std::cout << inputV[i] << " ";

	clock_t startV = clock();
	std::vector<int> VecSorted = fordJohnsonWithVector(inputV);
	clock_t endV = clock();
	double TimeV = static_cast<double>(endV - startV) / CLOCKS_PER_SEC * 10000;

	std::cout << "\nAfter: ";
	for (size_t i = 0; i < VecSorted.size(); ++i)
		std::cout << VecSorted[i] << " ";

	clock_t startL = clock();
	std::list<int> ListSorted = fordJohnsonWithList(inputL);
	clock_t endL = clock();
	double TimeL = static_cast<double>(endL - startL) / CLOCKS_PER_SEC * 10000;
	
	std::cout << "\nTime to process a range of " << numbers << " elements with std::vector : " << TimeV << " us" << std::endl;
	std::cout << "Time to process a range of " << numbers << " elements with std::list : " << TimeL << " us" << std::endl;
}