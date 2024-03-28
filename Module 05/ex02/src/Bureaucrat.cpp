/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:02:22 by pollo             #+#    #+#             */
/*   Updated: 2024/03/26 21:48:22 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150) {
	std::cout << "\033[32mBureaucrat Default constructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string Name, const int Grade) : name(Name) {
	std::cout << "\033[32mBureaucrat " << Name << ", Default constructor called\033[0m" << std::endl;

	if (Grade > 150)
		throw GradeTooLowException();
	else if (Grade < 1)
		throw GradeTooHightException();
	this->grade = Grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "\033[31mBureaucrat " << name << ", Default destructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name) {
	if (this != &other)
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
	std::cout << "\033[33mBureaucrat " << name << ", increment Grade called\033[0m" << std::endl;
	int Value = grade - increment;

	if (increment < 0)
		throw GradeTooLowException();
	if (Value < 1)
		throw GradeTooHightException();
	this->grade -= increment;
}

void	Bureaucrat::decrementGrade(const int decrement) {
	std::cout << "\033[33mBureaucrat " << name << ", decrement Grade called\033[0m" << std::endl;
	
	if (decrement < 0)
		throw GradeTooHightException();
	if ((this->grade + decrement) > 150)
		throw GradeTooLowException();
	this->grade += decrement;
}

const char* Bureaucrat::GradeTooHightException::what() const throw() {
	return "\033[31mGrade is too hight";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "\033[31mGrade is too low";
}

void Bureaucrat::signForm(AForm& form) const {
	
	if (form.getSigned() == true) {
		std::cout << "\033[34m" << form.getName() << " Form is already signed\033[0m" << std::endl;
	}
	else {
		try {
			form.beSigned(*this);
			std::cout << "\033[31m" << this->getName() << " signed the Form " 
			<< form.getName() << "\033[0m" << std::endl;
		} catch (Bureaucrat::GradeTooLowException& e) {
			std::cout << "\033[31m" << this->getName() << " couldn't sign the Form " 
			<< form.getName() << " because " << e.what() << "\033[0m" << std::endl;
		}
	}
}

void Bureaucrat::executeForm(AForm& form) const {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed the form " << form.getName() << "\033[0m" << std::endl;
	} catch (AForm::GradeTooLowException& e) {
		std::cout << "\033[31m" << this->getName() << " couldn't sign the form " 
		<< form.getName() << " because " << e.what() << "\033[0m" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat) {
    os << "\033[34m" << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "\033[0m";
    return os;
}
			