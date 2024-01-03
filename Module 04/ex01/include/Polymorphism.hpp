/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:51:46 by pollo             #+#    #+#             */
/*   Updated: 2024/01/03 12:20:12 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_HPP
# define POLYMORPHISM_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(std::string Animal);
		virtual ~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);

		std::string getType() const;
		virtual void makeSound() const;
};

class Dog : public Animal
{
	private:
		Brain*	dogBrain;

	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);

		virtual void makeSound() const;

		void putIdea(const std::string& newIdea);
		void getIdea();
};

class Cat : public Animal
{
	private:
		Brain*	catBrain;

	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);

		virtual void makeSound() const;

		void putIdea(const std::string& newIdea);
		void getIdea();
};

#endif
