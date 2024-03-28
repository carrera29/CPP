/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:02:22 by pollo             #+#    #+#             */
/*   Updated: 2024/03/28 11:55:12 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		throw Bureaucrat::GradeTooLowException();
	if (value < 1)
		throw Bureaucrat::GradeTooHightException();
	this->grade = value;
}

void	Bureaucrat::decrementGrade(const int decrement) {
	std::cout << "\033[34mBureaucrat " << name << ", decrement Grade called\033[0m" << std::endl;
	int value = grade + decrement;

	if (decrement <= 0)
		throw Bureaucrat::GradeTooHightException();
	if (value > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = value;
}

const char* Bureaucrat::GradeTooHightException::what() const throw() {
	return "Grade is too hight";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

void Bureaucrat::signForm(Form& form) const {
	
	if (form.getSigned() == true) {
		std::cout << "\033[1;31m" << form.getName() << " Form is already signed\033[0m" << std::endl;
	}
	else {
		try {
			form.beSigned(*this);
			std::cout << "\033[1;34m" << this->getName() << " signed the Form " 
			<< form.getName() << "\033[0m" << std::endl;
		} catch (const Form::GradeTooLowException& e) {
			std::cout << "\033[1;31m" << this->getName() << " couldn't sign the Form " 
			<< form.getName() << " because his " << e.what() << "\033[0m" << std::endl;
		}
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat) {
    os << "\033[34m" << bureaucrat.getName() << ", bureaucrat grade is " << bureaucrat.getGrade() << "\033[0m";
    return os;
}
			