/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:29:04 by pollo             #+#    #+#             */
/*   Updated: 2024/07/09 18:19:29 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Functions.hpp"

int main(void) {
    std::srand(static_cast<unsigned>(std::time(0)));
    
    Base* base = generate();
    std::cout << "base type is :\n";
    identify(base);
    identify(*base);

    Base* point = generate();
    std::cout << "point type is :\n";
    identify(point);
    identify(*point);

    Base* other = generate();
    std::cout << "other type is :\n";
    identify(*other);
    identify(*other);
}