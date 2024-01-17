/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2024/01/17 18:26:13 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

int main(void) {

    Dog Milu = Dog();
    Milu.getType();
    Milu.makeSound();
    Milu.putIdea("Estaba pensando ...");
    Milu.getIdea();

    Cat* Lulu = new Cat();
    Lulu->getType();
    Lulu->makeSound();
    Lulu->putIdea("Se me está ocurriendo...");
    Lulu->getIdea();

    delete Lulu;

    // system("leaks Poly");
	return 0;
}
