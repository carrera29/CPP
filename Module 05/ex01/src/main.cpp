/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/02/12 20:12:45 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    
    try {
        Bureaucrat  bureaucrat1("Toto", 150);
        Bureaucrat  bureaucrat2("Bob", 1);
        
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat1 << std::endl;

        Form    reglamento("Reglamento", 150, 145);
        Form    ley("Constitucion", 50, 1);

        bureaucrat1.signForm(ley);
        
        std::cout << reglamento << std::endl;
        std::cout << ley << std::endl;

    } catch (const Bureaucrat::GradeTooHightException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeNotValid& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Form::GradeTooHighException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Form::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Form::GradeNotValid& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
