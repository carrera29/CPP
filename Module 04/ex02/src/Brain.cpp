/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:22:17 by clcarrer          #+#    #+#             */
/*   Updated: 2023/12/27 22:26:27 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "\033[1;34mBrain Default constructor called" << std::endl;
    try {
        this->ideas = new std::string[100];
    }
    catch(std::bad_alloc& e) {
		std::cout << "\033[1;32mMemory error: " << e.what() << std::endl;
    }
}

Brain::~Brain() {
    std::cout << "\033[1;34mBrain Destructor called" << std::endl;
    delete[] ideas;
}

Brain::Brain(const Brain& other) {
    std::cout << "\033[1;34mBrain Copy constructor called" << std::endl;
    *this = other;
}

Brain&  Brain::operator=(const Brain& other){
    std::cout << "\033[1;34mBrain assignation operator called" << std::endl;
    this->ideas = other.ideas;
    return *this;
}
