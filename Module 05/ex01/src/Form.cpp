/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:56:37 by pollo             #+#    #+#             */
/*   Updated: 2024/02/12 19:53:41 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name(""), isSigned(false), requiredToSign(150), requiredToExecute(150) {
	std::cout << "\033[32mForm Default constructor called" << std::endl;
}

Form::Form(const std::string Name, const int toSign, const int toExecute) :
	name(Name), isSigned(false) {
		if (toSign < 1 || toSign > 150 || toExecute < 1 || toExecute > 150)
			throw GradeNotValid();
		this->requiredToSign = toSign, this->requiredToExecute = toExecute;
		std::cout << "\033[32mForm Default constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "\033[31mForm Default destructor called" << std::endl;
}

Form::Form(const Form& other) {
	*this = other;
	std::cout << "Form Copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other) {
	std::cout << "Form Copy assignment called" << std::endl;
	this->isSigned = other.isSigned;
	this->requiredToSign = other.requiredToSign;
	this->requiredToExecute = other.requiredToExecute;
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
		throw GradeTooLowException();
	this->isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "\033[31mError: Grade is too hight";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "\033[31mError: Grade is too low";
}

const char* Form::GradeNotValid::what() const throw() {
	return "\033[31mError: Grade not valid";
}

std::ostream& operator<<(std::ostream& os, Form& form) {
	os << "\033[34m" << form.getName();
	if (form.getSigned() == true)
		os << " is signed: ";
	else
		os << " is not signed: ";
    os << "\nNeeds a grade of " << form.getRequiredtosign() << " to be signed and " 
	<< form.getRequiredtoexecute() << " to be execued.";
    return os;
}