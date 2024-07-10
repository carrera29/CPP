/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/05/27 12:41:47 by clcarrer         ###   ########.fr       */
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
    Bureaucrat  bureaucrat1("Mr. P", 5);
    
    AForm       *paper = randomIntern.makeForm("RobotomyRequestForm", "Bender");
    AForm       *treePlant = randomIntern.makeForm("ShrubberyCreationForm", "Home");
    AForm       *pardon = randomIntern.makeForm("PresidentialPardonFor", "Presi Pardon");

    if (paper != NULL)
    { 
        try {
            bureaucrat1.signForm(*paper);
            bureaucrat1.executeForm(*paper);
        } catch (const AForm::GradeTooLowException& e) {
            std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
        }
    }

    if (treePlant != NULL)
    {
        try {
            bureaucrat1.signForm(*treePlant);
            bureaucrat1.executeForm(*treePlant);
        } catch (const AForm::GradeTooLowException& e) {
            std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
        }
    }

    if (pardon != NULL)
    {
        try {
            bureaucrat1.signForm(*pardon);
            bureaucrat1.executeForm(*pardon);
        } catch (const AForm::GradeTooLowException& e) {
            std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
        }
    }
    
    delete paper;
    delete treePlant;
    delete pardon;

    return 0;
}
