/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:52:25 by pollo             #+#    #+#             */
/*   Updated: 2023/08/31 18:10:34 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* Milu = new Dog();
	const Animal* Lulu = new Cat();
	const Cat Flavia;
	
	std::cout << "meta is a " << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << "Milu is a " << Milu->getType() << " " << std::endl;
	Milu->makeSound();
	std::cout << "Lulu is a " << Lulu->getType() << " " << std::endl;
	Lulu->makeSound();
	std::cout << "Flavia is a " << Flavia.getType() << " " << std::endl;
	Flavia.makeSound();

	delete meta;
	delete Milu;
	delete Lulu;

	return 0;
}