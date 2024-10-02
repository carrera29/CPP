/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:29:04 by pollo             #+#    #+#             */
/*   Updated: 2024/10/02 19:57:52 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Functions.hpp"

int main(void) {
    std::srand(static_cast<unsigned>(std::time(0)));
    
    Base* one = generate();
    std::cout << "base type is :\n";
    identify(one);
    identify(*one);

    Base* two = generate();
    std::cout << "point type is :\n";
    identify(two);
    identify(*two);

    Base* three = generate();
    std::cout << "other type is :\n";
    identify(three);
    identify(*three);

    return (0);
}
