/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/03/31 19:04:50 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    
    Intern      randomIntern = Intern();
    Bureaucrat  bureaucrat1("Mr. P", 127);
    
    AForm       *paper = randomIntern.makeForm("RobotomyRequestForm", "Bender");
    AForm       *treePlant = randomIntern.makeForm("ShrubberyCreationForm", "Home");

    if (paper != nullptr)
    { 
        try {
            bureaucrat1.signForm(*paper);
            bureaucrat1.executeForm(*paper);
        } catch (const AForm::GradeTooLowException& e) {
            std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
        }
    }

    if (treePlant != nullptr)
    {
        try {
            bureaucrat1.signForm(*treePlant);
            bureaucrat1.executeForm(*treePlant);
        } catch (const AForm::GradeTooLowException& e) {
            std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
        }
    }
    
    delete paper;
    delete treePlant;

    return 0;
}
