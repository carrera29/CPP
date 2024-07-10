/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:54:15 by clcarrer          #+#    #+#             */
/*   Updated: 2024/05/16 20:57:00 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    
    try {
        Bureaucrat bureaucrat1("Toto", 150);
        Bureaucrat bureaucrat2(bureaucrat1);
        Bureaucrat bureaucrat3("Bonnie", 45);

        std::cout << "\033[1m" << bureaucrat1 << "\033[0m" << std::endl;
        std::cout << "\033[1m" << bureaucrat2 << "\033[0m" << std::endl;
        std::cout << "\033[1m" << bureaucrat3 << "\033[0m" << std::endl;

        bureaucrat1.incrementGrade(149);
        std::cout << "\033[1m" << bureaucrat1 << "\033[0m" << std::endl;

        bureaucrat3.decrementGrade(5);
        std::cout << "\033[1m" << bureaucrat3 << "\033[0m" << std::endl;

        bureaucrat2 = bureaucrat3;
        std::cout << "\033[1m" << bureaucrat2 << "\033[0m" << std::endl;

    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    } catch (const Bureaucrat::GradeTooHightException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    }
    return 0;
}
