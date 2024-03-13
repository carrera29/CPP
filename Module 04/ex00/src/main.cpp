/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:52:25 by pollo             #+#    #+#             */
/*   Updated: 2024/02/16 16:17:18 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* Milu = new Dog();
	const Animal* Lulu = new Cat();

	meta->makeSound();
	std::cout << "\033[1;32mMilu is a " << Milu->getType() << " " << std::endl;
	Milu->makeSound();
	std::cout << "\033[1;33mLulu is a " << Lulu->getType() << " " << std::endl;
	Lulu->makeSound();

	const WrongAnimal* Flus = new WrongAnimal();
	const WrongAnimal* Flavia = new WrongCat();
	
	Flus->makeSound();
	std::cout << "\033[1;33mFlavia is a " << Flavia->getType() << " " << std::endl;
	Flavia->makeSound();

	delete meta;
	delete Milu;
	delete Lulu;
	delete Flavia;
	delete Flus;
	// system("leaks Poly");
	return 0;
}