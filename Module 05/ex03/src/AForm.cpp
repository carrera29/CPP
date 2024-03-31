/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:56:37 by pollo             #+#    #+#             */
/*   Updated: 2024/01/28 20:22:49 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name(""), isSigned(false), requiredToSign(150), requiredToExecute(150) {
	std::cout << "\033[32mAForm Default constructor called\033[0m" << std::endl;
}

AForm::AForm(const std::string Name, const int toSign, const int toExecute) :
	name(Name), isSigned(false), requiredToSign(toSign), requiredToExecute(toExecute) {
		std::cout << "\033[32mAForm Default constructor called\033[0m" << std::endl;
}

AForm::~AForm() {
	std::cout << "\033[32mAForm Default destructor called\033[0m" << std::endl;
}

AForm::AForm(const AForm& other) {
	if (this != &other)
		*this = other;
	std::cout << "\033[32mAForm Copy constructor called\033[0m" << std::endl;
}

AForm& AForm::operator=(const AForm& other) {
	std::cout << "\033[32mAForm Copy assignment called\033[0m" << std::endl;
	this->isSigned = other.isSigned;
	this->requiredToSign = other.requiredToSign;
	this->requiredToExecute = other.requiredToExecute;
	return *this;
}

const std::string AForm::getName() const {
    return this->name;
}

bool AForm::getSigned() const {
    return this->isSigned;
}

int AForm::getRequiredtosign() const {
    return this->requiredToSign;
}

int AForm::getRequiredtoexecute() const {
    return this->requiredToExecute;
}

void AForm::beSigned(const Bureaucrat& buro) {
	if (buro.getGrade() > this->getRequiredtosign())
		throw GradeTooLowException();
	this->isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is too hight";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char* AForm::FormNotsigned::what() const throw() {
	return "Form is not signed";
}

std::ostream& operator<<(std::ostream& os, AForm& AForm) {
	os << "\033[32m" << AForm.getName();
	if (AForm.getSigned() == true)
		os << " is signed: ";
	else
		os << " is not signed: ";
    os << "\nNeeds a grade of " << AForm.getRequiredtosign() << " to be signed and " 
	<< AForm.getRequiredtoexecute() << " to be execued.\033[0m";
    return os;
}
