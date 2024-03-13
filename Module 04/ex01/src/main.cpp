/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2024/03/13 21:00:45 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

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
    }

    for (i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }
    
    for (int i = 0; i < numAnimals; ++i)
        delete animals[i];

	// system("leaks Poly");
	return 0;
}
