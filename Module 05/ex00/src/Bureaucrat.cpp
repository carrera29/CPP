
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	*this = other;
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Bureaucrat Copy assignment called" << std::endl;
	if (this != &other) {
		this->name = other.name;
		this->range = other.range;
	}
	return *this;
}

const std::string Bureaucrat::getName() {
    return this->name;
}

int Bureaucrat::getRange() {
    return this->range;
}
