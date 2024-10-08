/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:37:58 by pollo             #+#    #+#             */
/*   Updated: 2024/10/02 19:42:43 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"

Base*   generate(void) {
    int randomChoise = std::rand() % 3;

    if (randomChoise == 0) return(new A());
    else if (randomChoise == 1) return(new B());
    else return(new C());
}


void    identify(Base* p){

    if (dynamic_cast<A*>(p) != NULL) std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL) std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL) std::cout << "C" << std::endl;
    else std::cout << "Unknown type" << std::endl;
}


void    identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } 
    catch (...) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (...) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch (...) {}
}
