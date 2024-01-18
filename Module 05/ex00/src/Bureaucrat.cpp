/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:02:22 by pollo             #+#    #+#             */
/*   Updated: 2024/01/18 23:39:10 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name) {
	if (Grade > 150)
		throw GradeTooLowException();
	else if (Grade < 1)
		throw GradeTooHightException();
	this->grade = Grade;
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	*this = other;
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Bureaucrat Copy assignment called" << std::endl;
	if (this != &other) {
		this->grade = other.grade;
	}
	return *this;
}

const std::string Bureaucrat::getName() {
    return this->name;
}

int Bureaucrat::getGrade() {
    return this->grade;
}

void	Bureaucrat::incrementGrade(const int increment) {
	if (increment < 0)
		std::cerr << "Error: Increment value must be positive." << std::endl;
	else if (this->grade - increment < 1)
		throw GradeTooHightException();
	else
		this->grade -= increment;
}

void	Bureaucrat::decrementGrade(const int decrement) {
	if (decrement < 0)
		std::cerr << "Error: Decrement value must be positive." << std::endl;
	else if (this->grade + decrement > 150)
		throw GradeTooLowException();
	else
		this->grade += decrement;
}

