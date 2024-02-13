/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/02/13 18:28:42 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    
    try {
        Bureaucrat  bureaucrat1("Toto", 145);
        Bureaucrat  bureaucrat2("Bob", 72);
        Bureaucrat  bureaucrat3("Mr. P", 25);
        Bureaucrat  bureaucrat4("Gerentisimo", 1);

        ShrubberyCreationForm doc1("Home");
        RobotomyRequestForm doc2("Meta");
        PresidentialPardonForm doc3("Anmistia");

        bureaucrat1.signForm(doc1);
        bureaucrat2.signForm(doc2);
        bureaucrat3.signForm(doc3);

        bureaucrat2.executeForm(doc1);
        bureaucrat3.executeForm(doc2);
        bureaucrat4.executeForm(doc3);

    } catch (const Bureaucrat::GradeTooHightException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeNotValid& e) {
        std::cerr << e.what() << std::endl;
    } catch (const AForm::GradeTooHighException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const AForm::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const AForm::GradeNotValid& e) {
        std::cerr << e.what() << std::endl;
    } catch (const AForm::FormNotsigned& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
