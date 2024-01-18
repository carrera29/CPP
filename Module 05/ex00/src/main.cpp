/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/01/18 23:43:07 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    
    try {
        Bureaucrat bureaucrat1("Toto", 50);
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.decrementGrade(5);
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.incrementGrade(-5);
        std::cout << bureaucrat1 << std::endl;

        Bureaucrat bureaucrat2("Bob", 155);
        std::cout << bureaucrat2 << std::endl;
        
    } catch (const Bureaucrat::GradeTooHightException e) {
        std::cerr << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}