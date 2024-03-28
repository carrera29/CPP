/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:56:37 by pollo             #+#    #+#             */
/*   Updated: 2024/03/28 10:55:13 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Another Form"), isSigned(false), requiredToSign(150), requiredToExecute(150) {
	std::cout << "\033[32mForm Default constructor called\033[0m" << std::endl;
}

Form::Form(const std::string Name, const int toSign, const int toExecute) :
	name(Name), isSigned(false) {
		if (toSign < 1 || toExecute < 1)
			throw GradeTooHighException();
		else if (toSign > 150 || toExecute > 150)
			throw GradeTooLowException();
		this->requiredToSign = toSign, this->requiredToExecute = toExecute;
		std::cout << "\033[32mForm Default constructor called\033[0m" << std::endl;
}

Form::~Form() {
	std::cout << "\033[32mForm Default destructor called\033[0m" << std::endl;
}

Form::Form(const Form& other) {
	if (this != &other)
		*this = other;
	std::cout << "\033[32mForm Copy constructor called\033[0m" << std::endl;
}

Form& Form::operator=(const Form& other) {
	std::cout << "\033[32mForm Copy assignment called\033[0m" << std::endl;
	if (this != &other) {
		this->isSigned = other.isSigned;
		this->requiredToSign = other.requiredToSign;
		this->requiredToExecute = other.requiredToExecute;
	}
	return *this;
}

const std::string Form::getName() const {
    return this->name;
}

bool Form::getSigned() const {
    return this->isSigned;
}

int Form::getRequiredtosign() const {
    return this->requiredToSign;
}

int Form::getRequiredtoexecute() const {
    return this->requiredToExecute;
}

void Form::beSigned(const Bureaucrat& buro) {
	if (buro.getGrade() > this->getRequiredtosign())
		throw Form::GradeTooLowException();
	this->isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too hight";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& os, Form& form) {
	os << "\033[32m" << form.getName();
	if (form.getSigned() == true)
		os << " is signed: ";
	else
		os << " is not signed: ";
    os << "\nNeeds a grade of " << form.getRequiredtosign() << " to be signed and " 
	<< form.getRequiredtoexecute() << " to be execued.\033[0m";
    return os;
}