/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/01/28 21:22:43 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main() {
    
    try {
        Bureaucrat  bureaucrat1("Toto", 150);
        Bureaucrat  bureaucrat2("Bob", 1);
        
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat1 << std::endl;

        AForm    reglamento("Reglamento", 150, 145);
        AForm    ley("Constitucion", 50, 1);

        reglamento.beSigned(bureaucrat1);
        
        std::cout << reglamento << std::endl;
        std::cout << ley << std::endl;

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
    }

    return 0;
}
