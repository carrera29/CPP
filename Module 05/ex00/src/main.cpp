/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:01:27 by pollo             #+#    #+#             */
/*   Updated: 2024/03/28 11:51:18 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    
    try {
        Bureaucrat bureaucrat1("Toto", 150);
        Bureaucrat bureaucrat2(bureaucrat1);
        Bureaucrat bureaucrat3("Bonnie", 45);

        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat3 << std::endl;

        bureaucrat1.incrementGrade(149);
        bureaucrat3 = bureaucrat1;
        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat3 << std::endl;
        
    } catch (const Bureaucrat::GradeTooHightException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "\033[1mError: " << e.what() << "\033[0m" << std::endl;
    }

    return 0;
}
