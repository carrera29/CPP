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
	std::cout << "\033[32mAForm Default constructor called" << std::endl;
}

AForm::AForm(const std::string Name, const int toSign, const int toExecute) :
	name(Name), isSigned(false) {
		if (toSign < 1 || toSign > 150 || toExecute < 1 || toExecute > 150)
			throw GradeNotValid();
		this->requiredToSign = toSign, this->requiredToExecute = toExecute;
		std::cout << "\033[32mAForm Default constructor called" << std::endl;
}

AForm::~AForm() {
	std::cout << "\033[31mAForm Default destructor called" << std::endl;
}

AForm::AForm(const AForm& other) {
	*this = other;
	std::cout << "AForm Copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other) {
	std::cout << "AForm Copy assignment called" << std::endl;
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
	buro.signAForm(*this);
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "\033[31mError: Grade is too hight";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "\033[31mError: Grade is too low";
}

const char* AForm::GradeNotValid::what() const throw() {
	return "\033[31mError: Grade not valid";
}

std::ostream& operator<<(std::ostream& os, AForm& AForm) {
	os << "\033[34m" << AForm.getName();
	if (AForm.getSigned() == true)
		os << " is signed: ";
	else
		os << " is not signed: ";
    os << "\nNeeds a grade of " << AForm.getRequiredtosign() << " to be signed and " 
	<< AForm.getRequiredtoexecute() << " to be execued.";
    return os;
}

void	AForm::setSigned(bool value) {
	this->isSigned = value;
}
