/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:41:31 by pollo             #+#    #+#             */
/*   Updated: 2024/01/28 21:54:15 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137) {
	std::cout << "\033[32mShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string Name) : AForm(Name, 145, 137) {
		std::cout << "\033[32mShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "\033[31mShrubberyCreationForm Default destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {
	*this = other;
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	std::cout << "ShrubberyCreationForm Copy assignment called" << std::endl;
	return *this;
}

const std::string ShrubberyCreationForm::getName() const {
    return this->getName();
}

bool ShrubberyCreationForm::getSigned() const {
    return this->getSigned();
}

int ShrubberyCreationForm::getRequiredtosign() const {
    return this->getRequiredtosign();
}

int ShrubberyCreationForm::getRequiredtoexecute() const {
    return this->getRequiredtoexecute();
}

void ShrubberyCreationForm::beSigned(const Bureaucrat& buro) {
	if (buro.getGrade() > this->getRequiredtosign())
		throw GradeTooLowException();
	this->setSigned(true);
	buro.signForm(*this);
}

const char* ShrubberyCreationForm::GradeTooHighException::what() const throw() {
	return "\033[31mError: Grade is too hight";
}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw() {
	return "\033[31mError: Grade is too low";
}

const char* ShrubberyCreationForm::GradeNotValid::what() const throw() {
	return "\033[31mError: Grade not valid";
}

std::ostream& operator<<(std::ostream& os, ShrubberyCreationForm& ShrubberyCreationForm) {
	os << "\033[34m" << ShrubberyCreationForm.getName();
	if (ShrubberyCreationForm.getSigned() == true)
		os << " is signed: ";
	else
		os << " is not signed: ";
    os << "\nNeeds a grade of " << ShrubberyCreationForm.getRequiredtosign() << " to be signed and " 
	<< ShrubberyCreationForm.getRequiredtoexecute() << " to be execued.";
    return os;
}
