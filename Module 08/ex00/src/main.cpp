/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:40:12 by pollo             #+#    #+#             */
/*   Updated: 2024/08/06 21:18:16 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {

    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2); 
    vec.push_back(3);

    try {
        std::vector<int>::iterator i = easyfind(vec, 2);
        std::cout << "Found value: " << *i << std::endl;
    } catch (const ValueNotFound& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::vector<int>::iterator i = easyfind(vec, 4);
        std::cout << "Found value: " << *i << std::endl;
    } catch (const ValueNotFound& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::vector<int>::iterator i = easyfind(vec, 3);
        std::cout << "Found value: " << *i << std::endl;
    } catch (const ValueNotFound& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}