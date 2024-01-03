/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2024/01/03 13:10:56 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

int main(void){
	const int numAnimals = 10;
    Animal* animals[numAnimals];
    Dog Milu = Dog();
    Milu.putIdea("Tengo una idea");
    Milu.getIdea();
    Milu.putIdea("Tengo otra idea mejor");
    Milu.getIdea();
    int i;

    for (i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
        if (Dog* dogPtr = dynamic_cast<Dog*>(animals[i])) {
            dogPtr->putIdea("You are the Animal number " + std::to_string(i + 1));
            dogPtr->getIdea();
        }
    }
    for (i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
        if (Cat* catPtr = dynamic_cast<Cat*>(animals[i])) {
            catPtr->putIdea("You are the Animal number " + std::to_string(i + 1));
            catPtr->getIdea();
        }
    }
    for (int i = 0; i < numAnimals; ++i)
        delete animals[i];

	// system("leaks Poly");
	return 0;
}
