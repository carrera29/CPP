/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:02:22 by pollo             #+#    #+#             */
/*   Updated: 2024/01/21 20:35:21 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150) {
	std::cout << "\033[32mBureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string Name, const int Grade) : name(Name) {
	std::cout << "\033[32mBureaucrat " << Name << ", Default constructor called" << std::endl;

	if (Grade > 150 || Grade < 1)
		throw GradeNotValid();
	this->grade = Grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "\033[31mBureaucrat " << name << ", Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name) {
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

const std::string& Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void	Bureaucrat::incrementGrade(const int increment) {
	std::cout << "\033[33mBureaucrat " << name << ", increment Grade called" << std::endl;
	int Value = grade - increment;

	if (increment < 0)
		throw GradeNotValid();
	if (Value < 1)
		throw GradeTooHightException();
	this->grade -= increment;
}

void	Bureaucrat::decrementGrade(const int decrement) {
	std::cout << "\033[33mBureaucrat " << name << ", decrement Grade called" << std::endl;
	
	if (decrement < 0)
		throw GradeNotValid();
	if ((this->grade + decrement) > 150)
		throw GradeTooLowException();
	this->grade += decrement;
}


const char* Bureaucrat::GradeTooHightException::what() const throw() {
	return "\033[31mError: Grade is too hight";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "\033[31mError: Grade is too low";
}

const char* Bureaucrat::GradeNotValid::what() const throw() {
	return "\033[31mError: Grade not valid";
}


std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat) {
    os << "\033[34m" << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
			