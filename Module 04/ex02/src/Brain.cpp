/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:22:17 by clcarrer          #+#    #+#             */
/*   Updated: 2023/12/28 22:06:27 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "\033[1;34mBrain Default constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "\033[1;34mBrain Destructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "\033[1;34mBrain Copy constructor called" << std::endl;
    *this = other;
}

Brain&  Brain::operator=(const Brain& other){
    std::cout << "\033[1;34mBrain assignation operator called" << std::endl;
    for(int i = 0; i <= Nideas; i++) {
        this->ideas[i] = other.ideas[i];
    }
    return *this;
}
