/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2024/03/13 21:19:20 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

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
