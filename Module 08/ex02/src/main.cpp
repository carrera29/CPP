/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:34:35 by pollo             #+#    #+#             */
/*   Updated: 2024/08/07 10:50:50 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void) {

    std::srand(static_cast<unsigned int>(std::time(0)));

    MutantStack<int> ms;
    
    for (int i = 0; i < 10; ++i)
        ms.push(random() % 10);

    for (MutantStack<int>::iterator i = ms.begin(); i != ms.end(); ++i)
        std::cout << "Value: " << *i << std::endl;

    for (size_t i = ms.size(); i > 0; --i)
        std::cout << "Index " << i << ": value is " << ms[i] << std::endl;

    return 0;
}