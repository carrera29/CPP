/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestFormForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:39:57 by pollo             #+#    #+#             */
/*   Updated: 2024/02/13 11:38:56 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", 72, 45), target("target") {
	std::cout << "\033[32mRobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target_) : AForm("Robot", 72, 45), target(target_) {
	std::cout << "\033[32mRobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "\033[31mRobotomyRequestForm Default destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
	*this = other;
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	std::cout << "RobotomyRequestForm Copy assignment called" << std::endl;
	(void)other;
	return *this;
}

const std::string	RobotomyRequestForm::getTarget(void) {
	return this->target;
}

void	RobotomyOperation(const std::string name) {
	std::cout << "	Rrrrr ... tatatatatata ...\n		ssshhhhhhh tintintin...\n" << 
			"			Ffffffhhs ... jdfdfsdfwfews" << std::endl;

	srand(time(NULL));
	int randomNumber = rand() % 2;
	if (randomNumber == 0)
		std::cout << name << ", Robotomy was successful!" << std::endl;
	else
		std::cout << "We'r sorry " << name << ", your Robotomy was a failure" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == true) {
		if (executor.getGrade() > this->getRequiredtoexecute())
			throw AForm::GradeTooLowException();
		RobotomyOperation(this->target);
	}
	else
		throw AForm::FormNotsigned();
}
