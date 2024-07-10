/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:47:40 by pollo             #+#    #+#             */
/*   Updated: 2024/05/17 00:46:44 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presi", 25, 5), target("target") {
	std::cout << "\033[33mPresidentialPardonForm Default constructor called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target_) : AForm("Presi", 25, 5), target(target_) {
	std::cout << "\033[33mPresidentialPardonForm Default constructor called\033[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "\033[33mPresidentialPardonForm Default destructor called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("Presi", 25, 5), target(other.target) {
	std::cout << "\033[33mPresidentialPardonForm Copy constructor called\033[0m" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	std::cout << "\033[33mPresidentialPardonForm Copy assignment called\033[0m" << std::endl;
	(void)other;
	return *this;
}

const std::string	PresidentialPardonForm::getTarget(void) {
	return this->target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getRequiredtoexecute())
		throw AForm::GradeTooLowException();
	std::cout << "\033[1;33mInforms that " << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
