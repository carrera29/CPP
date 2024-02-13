/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:41:31 by pollo             #+#    #+#             */
/*   Updated: 2024/02/13 18:29:40 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrub", 145, 137), target("") {
	std::cout << "\033[32mShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_) : AForm("Shrub", 145, 137), target(target_) {
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
	(void)other;
	return *this;
}

const std::string	ShrubberyCreationForm::getTarget(void) {
	return this->target;
}

void	plantPineTree(const std::string filename) {
	const std::string 	treePattern =
        "     *\n"
        "    /*\\\n"
        "   /* *\\\n"
		"  /* * *\\\n"
        " /* * * *\\\n"
		"/* * * * *\\\n"
		"    |||	\n";
	std::ofstream outputFile(filename, std::ios::out | std::ios::trunc);
	if (outputFile.is_open()) {
		outputFile << treePattern;
		outputFile.close();
	}
	else
		std::cerr << "Error: file not opened" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == true) {
		if (executor.getGrade() > this->getRequiredtoexecute())
			throw AForm::GradeTooLowException();
		plantPineTree(this->target + "_shrubbery");
	}
	else
		throw AForm::FormNotsigned();
}
