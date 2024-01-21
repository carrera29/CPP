/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/01/21 20:36:15 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    
    try {
        Bureaucrat bureaucrat1("Toto", 150);
        Bureaucrat bureaucrat2("Bob", 1);
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.incrementGrade(5);
        std::cout << bureaucrat1 << std::endl;

        bureaucrat2.decrementGrade(-5);
        std::cout << bureaucrat2 << std::endl;
        
    } catch (const Bureaucrat::GradeTooHightException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeNotValid& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
