/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:50:01 by pollo             #+#    #+#             */
/*   Updated: 2023/08/31 18:07:07 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_HPP
# define POLYMORPHISM_HPP

# include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string animal_type);
		virtual ~Animal();
		Animal(const Animal& other);

		std::string getType() const;
		virtual void makeSound() const;
};

class Dog : public Animal {
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& other);

		virtual void makeSound() const;
};

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& other);

		virtual void makeSound() const;
};

#endif