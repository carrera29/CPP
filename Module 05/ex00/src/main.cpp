/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:52:25 by pollo             #+#    #+#             */
/*   Updated: 2023/12/26 19:00:12 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* Milu = new Dog();
	const Animal* Lulu = new Cat();
	const Cat Flavia;
	
	meta->makeSound();
	std::cout << "\033[1;32mMilu is a " << Milu->getType() << " " << std::endl;
	Milu->makeSound();
	std::cout << "\033[1;33mLulu is a " << Lulu->getType() << " " << std::endl;
	Lulu->makeSound();
	std::cout << "\033[1;33mFlavia is a " << Flavia.getType() << " " << std::endl;
	Flavia.makeSound();
	

	delete meta;
	delete Milu;
	delete Lulu;
	// system("leaks Poly");
	return 0;
}