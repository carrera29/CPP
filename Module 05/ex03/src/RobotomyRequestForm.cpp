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
	std::cout << "\033[35mRobotomyRequestForm Default constructor called\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target_) : AForm("Robot", 72, 45), target(target_) {
	std::cout << "\033[35mRobotomyRequestForm Default constructor called\033[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "\033[35mRobotomyRequestForm Default destructor called\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
	std::cout << "\033[35mRobotomyRequestForm Copy constructor called\033[0m" << std::endl;
	if (this != &other)
		*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	std::cout << "\033[35mRobotomyRequestForm Copy assignment called\033[0m" << std::endl;
	(void)other;
	return *this;
}

const std::string	RobotomyRequestForm::getTarget(void) {
	return this->target;
}

void	RobotomyOperation(const std::string name) {
	std::cout << "\033[1;35m	Rrrrr ... tatatatatata ...\n		ssshhhhhhh tintintin...\n" << 
			"			Ffffffhhs ... jdfdfsdfwfews" << std::endl;

	srand(time(NULL));
	int randomNumber = rand() % 2;
	if (randomNumber == 0)
		std::cout << name << ", Robotomy was successful!\033[0m" << std::endl;
	else
		std::cout << "We'r sorry " << name << ", your Robotomy was a failure\033[0m" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getRequiredtoexecute())
		throw AForm::GradeTooLowException();
	RobotomyOperation(this->target);
}
