/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:55:50 by clcarrer          #+#    #+#             */
/*   Updated: 2024/07/16 09:47:55 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <whatever.hpp>

int main(void) {

    int a = 42;
    int b = 24;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "swap( a, b )" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    
    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "swap( c, d )" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;

}