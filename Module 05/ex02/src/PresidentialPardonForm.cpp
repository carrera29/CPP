/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:47:40 by pollo             #+#    #+#             */
/*   Updated: 2024/02/13 16:49:46 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presi", 25, 5), target("target") {
	std::cout << "\033[32mPresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target_) : AForm("Presi", 25, 5), target(target_) {
	std::cout << "\033[32mPresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "\033[31mPresidentialPardonForm Default destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {
	*this = other;
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	std::cout << "PresidentialPardonForm Copy assignment called" << std::endl;
	(void)other;
	return *this;
}

const std::string	PresidentialPardonForm::getTarget(void) {
	return this->target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == true) {
		if (executor.getGrade() > this->getRequiredtoexecute())
			throw AForm::GradeTooLowException();
		std::cout << "Informs that " << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	throw AForm::FormNotsigned();
}
