/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:00:44 by pollo             #+#    #+#             */
/*   Updated: 2024/03/31 18:43:15 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	std::cout << "\033[36mIntern Default constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "\033[36mIntern Default destructor called" << std::endl;
}

Intern::Intern(const Intern& other) {
	*this = other;
	std::cout << "\033[36mIntern Copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
	std::cout << "\033[36mIntern Copy assignment called" << std::endl;
	(void)other;
	return *this;
}

static AForm* makeShrubberyForm(const std::string target) {
	return (new ShrubberyCreationForm(target));
}

static AForm* makeRobotomyForm(const std::string target) {
	return (new RobotomyRequestForm(target));
}

static AForm* makePresidentialForm(const std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(const std::string formName, const std::string formTarget) {
	const std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm *(*allForms[])(const std::string target) = {&makeShrubberyForm, &makeRobotomyForm, &makePresidentialForm};

	for (int i = 0; i < 3; i++) {
		if (formName == forms[i]) {
			std::cout << "\033[36mThe Intern found the form " << formName << "\033[0m" << std::endl;
			return allForms[i](formTarget);
		}
	}
	std::cout << "\033[1;31mThe Inter couldn't find the Form named: " << formName << "\033[0m" << std::endl;
	return nullptr;
}
