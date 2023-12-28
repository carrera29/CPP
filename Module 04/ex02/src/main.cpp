/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2023/12/28 19:08:40 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

int main(void) {

    const Dog* Milu = new Dog();
    Milu->getType();
    Milu->makeSound();
    const Cat* Lulu = new Cat();
    Lulu->getType();
    Lulu->makeSound();

    delete Milu;
    delete Lulu;

    // system("leaks Poly");
	return 0;
}
