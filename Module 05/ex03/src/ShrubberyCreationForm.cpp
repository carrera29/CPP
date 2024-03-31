/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:41:31 by pollo             #+#    #+#             */
/*   Updated: 2024/03/28 14:01:07 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrub", 145, 137), target("") {
	std::cout << "\033[36mShrubberyCreationForm Default constructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_) : AForm("Shrub", 145, 137), target(target_) {
	std::cout << "\033[36mShrubberyCreationForm Default constructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "\033[36mShrubberyCreationForm Default destructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {
	if (this != &other)
		*this = other;
	std::cout << "\033[36mShrubberyCreationForm Copy constructor called\033[0m" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	std::cout << "\033[36mShrubberyCreationForm Copy assignment called\033[0m" << std::endl;
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
		"    | |	\n";
	std::ofstream outputFile(filename, std::ios::out | std::ios::trunc);
	if (outputFile.is_open()) {
		outputFile << treePattern;
		outputFile.close();
	}
	else
		std::cerr << "\033[1;31mError: file not opened\033[0m" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getRequiredtoexecute())
		throw AForm::GradeTooLowException();
	plantPineTree(this->target + "_shrubbery");
}
