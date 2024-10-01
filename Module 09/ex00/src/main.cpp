/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:37:59 by pollo             #+#    #+#             */
/*   Updated: 2024/09/13 17:45:53 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {

    if (argc == 2) {
        try {
            BitcoinExchange exchange(argv[1]);
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    else std::cout << "Error: could not open file" << std::endl;
    
    return 0;
}