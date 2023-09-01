/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:22:17 by clcarrer          #+#    #+#             */
/*   Updated: 2023/09/01 12:01:29 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "\033[1;34mBrain Default constructor called" << std::endl;
    this->ideas = new std::string[100];
}

Brain::~Brain() {
    std::cout << "\033[1;34mBrain Destructor called" << std::endl;
    delete[] ideas;
}

Brain::Brain(const Brain& other) {
    std::cout << "\033[1;34mBrain Copy constructor called" << std::endl;
    *this = other;
}
