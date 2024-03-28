/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/03/28 11:53:35 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    
    try {
        Bureaucrat  bureaucrat1("Toto", 150);
        Bureaucrat  bureaucrat2("Bonnie", 1);
        
        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;

        Form    reglamento("Reglamento", 150, 145);
        Form    ley("Constitucion", 50, 1);

        std::cout << reglamento << std::endl;
        std::cout << ley << std::endl;
        
        bureaucrat1.signForm(ley);
        bureaucrat2.signForm(reglamento);
        bureaucrat1.signForm(reglamento);

    } catch (const Bureaucrat::GradeTooHightException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    } catch (const Form::GradeTooHighException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    } catch (const Form::GradeTooLowException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    }
    
    return 0;
}
