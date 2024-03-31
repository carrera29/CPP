/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/03/31 19:09:03 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    
    try {
        Bureaucrat  bureaucrat1("Gerentisimo", 1);
        Bureaucrat  bureaucrat2("Mr. P", 25);
        Bureaucrat  bureaucrat3("Toto", 137);
        
        PresidentialPardonForm doc1("Anmistia");
        RobotomyRequestForm doc2("Meta");
        ShrubberyCreationForm doc3("Home");

        bureaucrat1.signForm(doc1);
        bureaucrat2.signForm(doc2);
        bureaucrat3.signForm(doc3);

        bureaucrat1.executeForm(doc1);
        bureaucrat2.executeForm(doc2);
        bureaucrat3.executeForm(doc3);

    } catch (const Bureaucrat::GradeTooHightException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    } catch (const AForm::GradeTooHighException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    } catch (const AForm::GradeTooLowException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    } catch (const AForm::FormNotsigned& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    }

    return 0;
}
