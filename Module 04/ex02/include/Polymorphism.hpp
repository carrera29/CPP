/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:51:46 by pollo             #+#    #+#             */
/*   Updated: 2024/01/17 18:29:53 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_HPP
# define POLYMORPHISM_HPP

# include <iostream>
# include "Brain.hpp"

/*
	cuando se utiliza un destructor virtual puro en una clase abstracta, 
	la intención es señalar que la clase es abstracta y
	que no debería haber instancias directas de esa clase.
*/
class AAnimal
{
	protected:
		std::string	type;

		AAnimal();
		AAnimal(std::string Animal);
	
	public:
		virtual ~AAnimal() = 0;
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);

		std::string getType() const;
		virtual void makeSound() const;
};

class Dog : public AAnimal
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

class Cat : public AAnimal
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
