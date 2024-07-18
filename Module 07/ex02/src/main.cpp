/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:52:52 by clcarrer          #+#    #+#             */
/*   Updated: 2024/07/18 17:50:26 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> defaultArray;
    std::cout << "defaultArray size: " << defaultArray.size() << std::endl;

    Array<int> arrayWithSize(5);
    std::cout << "arrayWithSize size: " << arrayWithSize.size() << std::endl;

    for (unsigned int i = 0; i < arrayWithSize.size(); ++i)
        arrayWithSize[i] = i * 10;

    for (unsigned int i = 0; i < arrayWithSize.size(); ++i)
        std::cout << "arrayWithSize[" << i << "] = " << arrayWithSize[i] << std::endl;

    Array<int> copiedArray(arrayWithSize);
    std::cout << "copiedArray size: " << copiedArray.size() << std::endl;

    for (unsigned int i = 0; i < copiedArray.size(); ++i)
        std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;

    Array<int> assignedArray;
    assignedArray = copiedArray;
    std::cout << "assignedArray size: " << assignedArray.size() << std::endl;

    for (unsigned int i = 0; i < assignedArray.size() ; ++i) {
        try {
            std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
        } catch (const std::out_of_range& e) {
           std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    return 0;
}