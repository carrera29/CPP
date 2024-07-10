/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:02:22 by clcarrer          #+#    #+#             */
/*   Updated: 2024/06/07 09:50:32 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Another Bureaucrat"), grade(150) {
	std::cout << "\033[34mBureaucrat Default constructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string Name, const int Grade) : name(Name) {
	std::cout << "\033[34mBureaucrat " << Name << ", Default constructor called\033[0m" << std::endl;

	if (Grade > 150)
		throw GradeTooLowException();
	else if (Grade < 1)
		throw GradeTooHightException();
	this->grade = Grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "\033[34mBureaucrat " << name << ", Default destructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name) {
	if (this != &other)
		*this = other;
	std::cout << "\033[34mBureaucrat Copy constructor called\033[0m" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "\033[34mBureaucrat Copy assignment called\033[0m" << std::endl;
	if (this != &other) {
		this->grade = other.grade;
	}
	return *this;
}

const std::string& Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void	Bureaucrat::incrementGrade(const int increment) {
	std::cout << "\033[34mBureaucrat " << name << ", increment Grade called\033[0m" << std::endl;
	int value = grade - increment;

	if (increment <= 0)
		throw GradeTooLowException();
	if (value < 1)
		throw GradeTooHightException();
	this->grade = value;
}

void	Bureaucrat::decrementGrade(const int decrement) {
	std::cout << "\033[34mBureaucrat " << name << ", decrement Grade called\033[0m" << std::endl;
	int value = grade + decrement;

	if (decrement <= 0)
		throw GradeTooHightException();
	if (value > 150)
		throw GradeTooLowException();
	this->grade = value;
}

const char* Bureaucrat::GradeTooHightException::what() const throw() {
	return "Grade is too hight\033[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low\033[0m";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << "\033[34m" << bureaucrat.getName() << ", bureaucrat grade is " << bureaucrat.getGrade() << "\033[0m";
    return os;
}
