/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:56:37 by pollo             #+#    #+#             */
/*   Updated: 2024/01/21 20:57:46 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {
	std::cout << "Form Default constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "Form Default destructor called" << std::endl;
}

Form::Form(const Form& other) {
	*this = other;
	std::cout << "Form Copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other) {
	std::cout << "Form Copy assignment called" << std::endl;
	if (this != &other) {
		this->name = other.name;
		this->signed = other.signed;
		this->requiredToSign = other.requiredToSign;
		this->requiredToExecute = other.requiredToExecute;
	}
	return *this;
}

const std::string Form::getName() const {
    return this->name;
}

bool Form::getSigned() const {
    return this->signed;
}

const int Form::getRequiredtosign() const {
    return this->requiredToSign;
}

const int Form::getRequiredtoexecute() const {
    return this->requiredToExecute;
}
