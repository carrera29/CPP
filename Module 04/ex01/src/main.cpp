/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2023/09/01 12:08:09 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

int main(void){
	const int numAnimals = 10;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals / 2; ++i)
        animals[i] = new Dog();

    for (int i = numAnimals / 2; i < numAnimals; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < numAnimals; ++i)
        delete animals[i]; 

	system("leaks Poly");
	return 0;
}
