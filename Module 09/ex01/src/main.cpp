/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:33:01 by pollo             #+#    #+#             */
/*   Updated: 2024/10/30 14:23:18 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char* argv[]) {
    
   if (argc == 2) {
        try {
            RPN(argv[1]);
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    else std::cout << "Error: please enter the operations" << std::endl;
    
    return 0;
}